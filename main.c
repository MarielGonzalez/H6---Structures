#include <stdio.h>
#include <stdbool.h>
#include <curses.h> 
#include <stdio.h>
#include <ctype.h>

void printOddNumbers();
void determineAgeCategory();

int main(void) {
	bool status = true;
	while(status){
		// * Tomar Input del usuario
		printf("Elija el programa a ejecutar \n");
		printf("1 - Imprimir Numeros Impares hasta el 201 \n");
		printf("2 - Determinar la categoria de edad de una persona \n");
		printf("3 - Salir \n");
		int input;
		scanf("%d", &input);
		switch(input){
			case 1:
				printOddNumbers();
				break;
			case 2:
				determineAgeCategory();
				break;
			case 3: 
				printf("Gracias por venir. Vuelva Pronto!");
				status = false;
				break;
			default:
				printf("Opcion Invalida. Elija otra vez \n");
				break;
		}
	}
  return 0;
}

void printOddNumbers(){

	char option;

	do{
		int impar = 1;
		int i;
		char eleccion;
		
		printf("Escoja con cual estructura desea ejecutar el ejercicio:\n");
		printf("F - SENTENCIA FOR \n");
		printf("W - SENTENCIA WHILE \n");
		printf("D - SENTENCIA DO-WHILE \n");
		
		scanf("%s", &eleccion);

		switch(eleccion){
			case 'F':
				// * Sentencia For
				printf("NUMEROS IMPARES DEL 1 AL 201 CON SENTENCIA FOR \n");
				for(i=0 ;impar<=201;i++){
				printf("%d \n",impar);
				impar+=2; 
				};
				break;
				
			case 'W':
				// * Sentencia While
				printf("NUMEROS IMPARES DEL 1 AL 201 CON SENTENCIA WHILE \n");
				while(impar<=201) {
				printf("%d \n",impar);
				impar+=2;
				};
				break;

			case 'D':
			 	// * Sentencia Do-While
				do{
				printf("%d \n",impar);
				impar+=2;
					
				}while(impar<=201); 
				break;

			default: 
				printf("opcion no valida");
		}
		printf( "Desea continuar....SI(S)/NO(N)?\t \n" );
		scanf("%s", &option);
	
	}while((option='S' && option!='N'));
}

	


void determineAgeCategory(){
	char option;
	int edad;
	do{
		
		printf( "\n   Introduzca edad: " );
		scanf( "%du", &edad );

		if ( edad >= 0 && edad <= 122 )
			if ( edad <= 3 )
				printf( "La edad ingresada es la de un BEBE \n \t" );
			else if ( edad <= 11 )
				printf( "La edad ingresada es la de un NIñO \n \t" );
			else if ( edad <=18 )
				printf( "La edad ingresada es la de un ADOLESCENTE \n \t" );					
			else if ( edad <= 35 && edad>=19 )
				printf( "La edad ingresada es la de un JOVEN \n \t" );
			else if ( edad >35 && edad<=70 )
				printf( "La edad ingresada es la de un ADULTO \n \t" );
			else
				printf( "La edad ingresada es la de un ANCIANO \n \t" );									
		else 
			printf( "   ERROR: Favor introduzca un margen de edad valido.\n" );
							
		getchar();
		//clrscr ();
		printf( "Desea continuar....SI(S)/NO(N)?\t \n" );
		scanf("%s", &option);        
						
	}while((option='S' && option!='N'));
}