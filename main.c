#include <stdio.h>
#include <stdbool.h>
#include <curses.h> 
#include <stdio.h>
#include <ctype.h>

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

	int impar = 1;
  int i;
	char eleccion;

	// TODO: imprimir impares hasta el 201 usando FOR
	printf("Escoja con cual estructura desea ejecutar el ejercicio:\n");
	printf("F - SENTENCIA FOR \n");
  printf("W - SENTENCIA WHILE \n");
	printf("D - SENTENCIA DO-WHILE \n");
   
  
	eleccion=getchar();

 switch(eleccion=toupper(eleccion)){
		case 'F':
		 printf("NUMEROS IMPARES DEL 1 AL 201 CON SENTENCIA FOR \n");
		for(i=0 ;impar<=201;i++){
    printf("%d \n",impar);
    impar+=2; 
	  };
		break;

   case 'W':
   printf("NUMEROS IMPARES DEL 1 AL 201 CON SENTENCIA WHILE \n");
   while(impar<=201) {
	 printf("%d \n",impar);
	 impar+=2;
	 };
    break;

  case 'D':
   do{
   printf("%d \n",impar);
   impar+=2;
    
  }while(impar<=201); 
	break;

  default: printf("opcion no valida");
   
    
   
 }
 getchar();

}

	
void determineAgeCategory(){

	//printf("calling determineAgeCategory()");


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


   


