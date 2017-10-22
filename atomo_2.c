// Átomo.

	/*
	------------------------------------------------------------------------------------------
	El programa imprime una matriz de manera repetida sobre el mismo espacio de trabajo para 
	crear la ilusión de una imagen en movimiento.
	------------------------------------------------------------------------------------------
	*/
	

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
	int i, j, k = 1;
	int ccon[12][24] ;
	

	
	while(1){
		
		Sleep(10);
		
			for( i = 0 ; i < 12 ; i++ ){
		
				for( j = 0 ; j < 24 ; j++){
		
					ccon[i][j] = 32;
		
				}
			}
		
		ccon[6][11] = 219;
		ccon[6][12] = 219;
		
		
		if (k == 1){
			
			ccon[4][11] = 240;
			ccon[4][12] = 240;
			
			ccon[8][11] = 219;
			ccon[8][12] = 219;
			
		}else if( k == 3 ){
			
			ccon[5][15] = 176;
			ccon[5][16] = 176;
			
			ccon[7][7] = 178;
			ccon[7][8] = 178;
			
		}else if( k == 5 ){
			
			ccon[6][19] = 177;
			ccon[6][20] = 177;
			
			ccon[6][3] = 177;
			ccon[6][4] = 177;
			
		}else if( k == 7 ){
			
			ccon[7][15] = 178;
			ccon[7][16] = 178;
			
			ccon[5][7] = 176;
			ccon[5][8] = 176;
			
		}
		
			 
		for( i = 0 ; i < 12 ; i++){
			
			for( j = 0 ; j < 24 ; j++){
				
				printf("%c", ccon[i][j] );
				
			}
				
			printf("\n");
		}

		k++;
		
		if( k == 9){
			
			k = 1;
			
		}
	
		system("cls");
		
	}
	
}

	/*
	
	Datos Generales del archivo:
	------------------------------------------------------------------------------------------
	Universidad Nacional Autónoma de México
	Facultad de Ingeniería
	Fundamentos de Programación
	Grupo: 1120
	
	Ejercicio: Individual
	 
	Autor: Jose Luis Bautista Rodríguez
	------------------------------------------------------------------------------------------
	
	*/
