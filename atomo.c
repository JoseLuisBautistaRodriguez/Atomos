// Átomo_2.

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
		
			for( i = 0 ; i < 12 ; i++ ){
		
				for( j = 0 ; j < 24 ; j++){
		
					ccon[i][j] = 32;
		
				}
			}
		
		ccon[6][11] = 219;
		ccon[6][12] = 219;
		
		
		if (k == 1){
			
		//	ccon[4][11] = 223;
			ccon[4][12] = 223;
			
		//	ccon[8][11] = 223;
			ccon[8][12] = 223;
			
		}else if( k == 3 ){
			
		//	ccon[5][15] = 223;
			ccon[5][16] = 223;
			
		//	ccon[7][7] = 223;
			ccon[7][8] = 223;
			
		}else if( k == 5 ){
			
		//	ccon[6][19] = 223;
			ccon[6][20] = 223;
			
		//	ccon[6][3] = 223;
			ccon[6][4] = 223;
			
		}else if( k == 7 ){
			
		//	ccon[7][15] = 223;
			ccon[7][16] = 223;
			
		//	ccon[5][7] = 223;
			ccon[5][8] = 223;
			
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
		Sleep(30);
		
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
