#include <stdio.h>
#include <stdbool.h>

void printOddNumbers();
void determineAgeCategory();

int main(void) {
	// * Imprimir Menu
  printf("Elija el programa a ejecutar \n");
  printf("1 - Imprimir Numeros Impares hasta el 201 \n");
  printf("2 - Determinar la categoria de edad de una persona \n");

	// * Tomar Input del usuario
	
	// * Ejecutar ejercicio segun opcion
	bool status = true;
	while(status){
		int input;
		scanf("%d", &input);
		switch(input){
			case 1:
				printOddNumbers();
				status = false;
				break;
			case 2:
				determineAgeCategory();
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

	printf("calling printOddNumbers()");

	// TODO: imprimir impares usando FOR

	// TODO: imprimir impares usando WHILE

	// TODO: imprimir impares usando DO-WHILE

}

// TODO: Hacer un programa en C que lea la edad de una persona y determinar: 
// si la persona es un bebé, si es un niño, si es un adolescente, si es un adulto o si es un ancianito. 
// Uso de estructuras selectivas If-Else y operadores lógicos-relacionales.
void determineAgeCategory(){

	printf("calling determineAgeCategory()");

	/*	
		Categorias:
		Primera Infancia 	(0-5 años)
		Infancia 					(6 - 11 años)
		Adolescencia 			(12 - 18 años)
		Juventud 					(14 - 26 años)
		Adultez 					(27- 59 años)
		Persona Mayor 		(60 años o mas) envejecimiento y vejez 
	*/

}



