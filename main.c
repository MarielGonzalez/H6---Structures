#include <stdio.h>

void printOddNumbers();
void determineAgeCategory();

int main(void) {
  printf("Elija el programa a ejecutar");
  printf("1 - Imprimir Numeros Impares hasta el 201");
  printf("2 - Determinar la categoria de edad de una persona");

	int input;
	scanf("%d", &input);

	switch(input){
		case 1:
			printOddNumbers();
			break;
		case 2:
			determineAgeCategory();
			break;
		default:
			break;
	}
  return 0;
}

// TODO: Hacer un programa en C que muestre por pantalla los números impares hasta el 201. 
// Hacerlo empleando las sentencias iterativas FOR, la sentencia WHILE y la sentencia DO WHILE 
// ( uno con Do while, otro con For y otro con While); 
// aquí el incremento es en 2.
void printOddNumbers(){

}

// TODO: Hacer un programa en C que lea la edad de una persona y determinar: 
// si la persona es un bebé, si es un niño, si es un adolescente, si es un adulto o si es un ancianito. 
// Uso de estructuras selectivas If-Else y operadores lógicos-relacionales.
void determineAgeCategory(){

}