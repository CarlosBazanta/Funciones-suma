#include <stdio.h> 
#include <math.h>
#include <conio.h>
#include <stdlib.h>

void clearBuf(void);
int validFormat(const char*, void*);
int validar=1;
int suma(int suma1, int suma2, int valor){
	
		printf("\nIngrese sus valores\n");
		
	do{ //se inicia un ciclo que repetira partes del programa 
		
		inicio: //marca un punto en el programa para poder retornar a el
			printf("\nPrimer valor = ");
			if(validFormat("%i",&suma1)) continue; //validformat nos sirve para ingresar los datos y validarlos
			
			validar=suma1<=0; //valida la opcion y si es menor saltara un error
			
			if(validar){ //if que sirve para imprimir en pantalla el error
				
				printf("\n\nIngreso un numero invalido\n");
				printf("No se aceptan numeros menores o iguales 0\n\n"); //imprime en pantalla el error
			
		}
		}while(validar);//que retorna despues de mostrar el error
			
			if(suma1>=999999){ //if que sirve para imprimir en pantalla el error de numeros muy grandes
				
				printf("\n\nIngreso un numero demasiado alto o invalido\n");
				printf("Ingrese una opcion valida\n\n"); //imprime en pantalla el error
			
				goto inicio; //da la orden para que el programa vaya a un punto de este
				
			}
			
			
			
			do{ //se inicia un ciclo que repetira partes del programa 
		
		inicio1: //marca un punto en el programa para poder retornar a el
		
			printf("\nSegundo valor = ");
			if(validFormat("%i",&suma2)) continue; //validformat nos sirve para ingresar los datos y validarlos
			
			validar=suma2<=0; //valida la opcion y si es menor saltara un error
			
			if(validar){ //if que sirve para imprimir en pantalla el error
				
				printf("\n\nIngreso un numero invalido\n");
				printf("No se aceptan numeros menores o iguales 0\n\n"); //imprime en pantalla el error
			
		}
		}while(validar);//que retorna despues de mostrar el error
			
			if(suma2>=999999){ //if que sirve para imprimir en pantalla el error de numeros muy grandes
				
				printf("\n\nIngreso un numero demasiado alto o invalido\n");
				printf("Ingrese una opcion valida\n\n"); //imprime en pantalla el error
			
				goto inicio1; //da la orden para que el programa vaya a un punto de este
				
			}
	
	valor=suma1+suma2;
	
	printf("\nEl valor de su operacion es de %i ",valor);
	
}

int main(){
	
	int suma1,suma2,valor;
	
	suma(suma1,suma2,valor);
	
	

getch();	
}



int validFormat(const char* formato, void* variable){ /* Esto es para verificar variables */
	
	validar=1;//reseteamos la comprobacion de la opcion
    /* si se retorna 0 fue porque ocurrio un error*/
    
    if(!scanf(formato, variable) || (getchar() != '\n'))
    {
        
        clearBuf();/* Se utiliza para limpiar el buffer */
        
        printf("\n\n\tError\n\n");
        printf("\n\tUsted Ingreso una opcion no valida\n"); /* Se imprime en pantalla el error */
        printf("\n\tPor favor ingrese una opcion valida\n");
        system("pause");
		
        return 1;
    }
    
    return 0;
}

void clearBuf()
{
    int ch;
    /* Se utiliza para limpiar el buffer */
    while((ch = getchar()) != '\n' && ch != EOF);
}

