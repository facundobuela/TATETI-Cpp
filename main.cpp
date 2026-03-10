#include<iostream>
using namespace std;
#include "definiciones.h"
#include "prototipos.h"


int main (int argc, char *argv[]) {
	int fila,columna;
	char turno = 'X';
	char tablero[T][T];
	inicializoTablero(tablero);
	mostrarTablero(tablero);
	do {
		do{
			fila = pidoFila(turno);
			columna = pidoColumna(turno);
		}while (!estaLibre(tablero,fila,columna));
		tablero[fila][columna] = turno;
		mostrarTablero(tablero);
		if (turno == 'X'){
			if (!hayGanador(tablero,turno)){
				turno = 'O';
			}else{
				break;
			}
		}else{
			if (!hayGanador(tablero,turno)){
				turno = 'X';
			}else{
				break;
			}
		}
	}while (!hayEmpate(tablero));
	if (hayGanador(tablero,turno)){
		printf("Felicitaciones jugador %c",turno);
	}else{
		printf("Hay empate");
	}
	return 0;
}

