#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H

//inicializo el tablero
void inicializoTablero(char tablero[T][T]);

//solicito fila
int pidoFila(char turno);

//solicito columna
int pidoColumna(char turno);

//muestro tablero
void mostrarTablero(char tablero[T][T]);

//consulo sobre el estado de la celda
bool estaLibre(char tablero[T][T],int fila,int columna);

//Averiguo si hay una linea horizontal de marca
bool horizontal(char tablero[T][T],char marca);

//Averiguo si hay una linea vertical de marca
bool vertical(char tablero[T][T], char marca);

//Averiguo si hay una linea diagonal de marca
bool diagonal(char tablero[T][T], char marca);

//Averiguo si alguien logró hacer una linea horizontal, vertical o diagonal de marcas
bool hayGanador(char tablero[T][T], char marca);

//Averiguo si hay algún lugar sin marca para determinar si hay o no empate
bool hayEmpate(char tablero[T][T]);

#endif
