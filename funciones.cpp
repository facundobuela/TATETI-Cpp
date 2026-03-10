#include<iostream>
using namespace std;
#include "definiciones.h"

//Inicializo el Tablero
void inicializoTablero(char tablero[T][T]) {
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			tablero[i][j] = ' ';
		}
	}
}

//Pido y controlo el ingreso de la fila
int pidoFila(char marca) {
	int fila;
	do{
		printf("Ingrese fila (0..2): ");
		scanf("%d",&fila);
	}while (fila < 0 || fila > 2);
	return fila;
}

//Pido y controlo el ingreso de la columna
int pidoColumna(char marca) {
	int columna;
	do{
		printf("Ingrese columna (0..2): ");
		scanf("%d",&columna);
	}while (columna < 0 || columna > 2);
	return columna;
}

//Averiguo si está libre el lugar que me ingresaron
bool estaLibre(char tablero[T][T],int fila,int columna){
	if (tablero[fila][columna] == ' '){
		return true;
	}else{
		return false;
	}
}
//Muestro el tablero
void mostrarTablero(char tablero[T][T]) {
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			printf ("| %c ",tablero[i][j]);
		}
		printf("|\n");
	}
}

//Averiguo si hay una linea horizontal de marca
bool horizontal(char tablero[T][T],char marca){
	for (int i = 0; i<T ; i++){
		if (tablero[i][0] == marca && tablero[i][1] == marca && tablero[i][2]==marca){
			return true;
		}
	}
	return false;
}
	
//Averiguo si hay una linea vertical de marca
bool vertical(char tablero[T][T], char marca){
	for (int i = 0; i<T ; i++){
		if (tablero[0][i] == marca && tablero[1][i] == marca && tablero[2][i]==marca){
			return true;
		}
	}
	return false;
}
//Averiguo si hay una linea  diagonal de marca
bool diagonal(char tablero[T][T], char marca){
	if ((tablero[0][0] == marca && tablero[1][1] == marca && tablero[2][2]== marca) || (tablero[0][2] == marca && tablero[1][1] ==marca && tablero [2][0]==marca)){
		return true;
	}else{
		return false;
	}
}
//Averiguo si alguien logró hacer una linea horizontal, vertical o diagonal de marcas
bool hayGanador(char tablero[T][T],char marca){
	if ( horizontal(tablero,marca) || vertical(tablero,marca) || diagonal(tablero,marca) ){
		return true;
	}else{
		return false;
	}
}

	
//Averiguo si hay algún lugar sin marca para determinar si hay o no empate
bool hayEmpate(char tablero[T][T]){
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			if(tablero[i][j] == ' ') {
				return false;
			}			
		}
	}
	return true;
}
