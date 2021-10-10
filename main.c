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
   
  scanf("%s", &eleccion);
	//eleccion=getchar();

 switch(eleccion){
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

	//printf("Tomando en cuenta el siguiente rango de edades:");
	/*	
		Categorias:
	  Bebe              (0  -  3 años)
		Niño              (4  - 11 años)
		Adolescente 	  	(12 - 18 años)
		Joven     				(19 - 35 años)
		Adulto  					(36 - 70 años)
		Anciano 	      	(70 años o mas)  
	*/


	 int edad;

    printf( "\n   Introduzca la edad: " );
    scanf( "%d", &edad );

 if ( edad >= 0 && edad <= 122 )
        if ( edad <= 3 )
            printf( "La edad ingresada es la de un BEBE \n \t" );
        else
            if ( edad <= 11 )
                printf( "La edad ingresada es la de un NIñO \n \t" );
            else
                if ( edad <=18 )
                   printf( "La edad ingresada es la de un ADOLESCENTE \n \t" );
                    
                    else
                        if ( edad <= 35 && edad>=19 )
                           printf( "La edad ingresada es la de un JOVEN \n \t" );
                        else
                             if ( edad >35 && edad<=70 )
                             printf( "La edad ingresada es la de un ADULTO \n \t" );
                             else
                             printf( "La edad ingresada es la de un ANCIANO \n \t" );
                    
  else 
      printf( "   ERROR: Favor introduzca un margen de edad valido.\n" );
            
             getchar();
     
	}


   


