#include <stdio.h>
#include <stdbool.h>
#include <curses.h> 
#include <stdio.h>

void printOddNumbers();
void determineAgeCategory();

int main(void) {
	// * Imprimir Menu
  printf("Elija el programa a ejecutar \n");
  printf("1 - Imprimir Numeros Impares hasta el 201 \n");
  printf("2 - Determinar la categoria de edad de una persona \n");

	
	
	// * Ejecutar ejercicio segun opcion
	bool status = true;
	while(status){
		// * Tomar Input del usuario
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

	//printf("calling printOddNumbers()\n");

	// TODO: imprimir impares hasta el 201 usando FOR
	printf("Numero impares hasta el 201 usando la sentencia 'FOR'\n");
   
  int impar = 1;
  int i;

  for(i=0 ;impar<=201;i++){
    
		printf("%d \n",impar);
    impar+=2; 



}
	// TODO: imprimir impares usando WHILE













	// TODO: imprimir impares usando DO-WHILE
}

// TODO: Hacer un programa en C que lea la edad de una persona y determinar: 
// si la persona es un bebé, si es un niño, si es un adolescente, si es un adulto o si es un ancianito. 
// Uso de estructuras selectivas If-Else y operadores lógicos-relacionales.
void determineAgeCategory(){

	printf("calling determineAgeCategory()");


	 int edad;

    printf( "\n   Introduzca edad: " );
    scanf( "%d", &edad );

    if ( edad >= 0 && edad <= 122 )
        if ( edad < 3 )
            printf( "\n   BEBE" );
        else
            if ( edad < 14 )
                printf( "\n   NINO" );
            else
                if ( edad < 18 )
                    printf( "\n   ADOLESCENTE" );
                    else
                        if ( edad < 60 )
                            printf( "\n   ADULTO" );
                        else
                            printf( "\n   ANCIANO" );
    else
        printf( "\n   ERROR: Edad incorrecta." );

    getchar();

     
	/*	
		Categorias:
	  Bebe              (0  -  2 años)
		Nino              (3  - 13 años)
		Adolescente 	  	(14 - 18 años)
		Adulto  					(19 - 59 años)
		Anciano 	      	(60 años o mas)  
	*/

}


   


