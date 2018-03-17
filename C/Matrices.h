/**
Nombre: Matrices.h
Autor: Carlos Javier Ruiz Sansores
Fecha: 16 marzo 2018 (Version 0.1)
Descripción: Esta es una simple biblioteca con funciones que ayudan al manejo de matrices en C.
En general se incluyen funciones que rellenan una matriz, la imprimen o que hacen alguna operación entre
2 matrices cualesquiera.
*/

#ifndef MATRICES_H
#define MATRICES_H

//La función se encarga de llenar una matriz al pedirle al usuario los valores a introducir
void RellenarMatriz_Manual(float matriz[TamMax][TamMax], int TamFilas, int TamColumnas){
	int fila,columna;

	for(fila = 0;fila<TamFilas;fila++){
		for(columna = 0;columna < TamColumnas; columna++){
			printf("\nIntroduzca un valor en la posici%cn [%d][%d]: ",162,fila,columna);
			scanf("%f",&matriz[fila][columna]);
		}
	}
}

//La función se encarga de llenar una matriz de manera automática con los valores que se le digan
void RellenarMatriz_Auto(float matriz[TamMax][TamMax], int TamFilas, int TamColumnas){
	int fila,columna;

	for(fila = 0;fila<TamFilas;fila++){
		for(columna = 0;columna < TamColumnas; columna++){
			printf("\nIntroduzca un valor en la posici%cn [%d][%d]: ",162,fila,columna);
			scanf("%f",&matriz[fila][columna]);
		}
	}
}

//La función se encarga de imprimir en pantalla una matriz de tamaño variable
void mostrarMatriz(float matriz[TamMax][TamMax], int TamFilas, int TamColumnas){
	int fila, columna;

	for(fila = 0; fila < TamFilas; fila++){
		for(columna = 0; columna < TamColumnas; columna++){
			printf("|%4.3f| ",matriz[fila][columna]);
			if(columna == TamColumnas - 1)
				printf("\n\n"); //Esta instrucci�n hace que la matriz se vea ordenada
		}
	}
}

//La función se encarga de crear una matriz identidad con el tamaño que se necesite
void RellenarMatrizIdentidad(float matriz[TamMax][TamMax], int TamFilas, int TamColumnas){
	int fila,columna;

	for(fila = 0;fila<TamFilas;fila++){
		for(columna = 0;columna < TamColumnas; columna++){
			if(fila == columna)
				matriz[fila][columna] = 1;
			else
				matriz[fila][columna] = 0;
		}
	}
}




#endif
