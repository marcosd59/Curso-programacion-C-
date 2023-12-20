/* 12. Hacer un menu que considere las siguientes opciones

    caso 1: Cubo de un numero
    caso 2: Numero par o impar
    caso 3: Salir

*/

#include <stdio.h>

int main(){

    int numero, numero2;
    int opc;

    printf("\n\tBienvenido a MATEFACIL\n\n");
    printf("1. Obtener el cubo de un numero\n");
    printf("2. Determinar si un numero es par o impar\n");
    printf("3. Salir\n\n");
    printf("Opcion: ");
    scanf("%i",&opc);

    switch(opc)
    {
        case 1: printf("Ingrese un numero: ");
            scanf("%d",&numero);
            numero = numero * numero * numero; 
            printf("El cubo es: %d",numero); break;
            
        case 2: printf("Digite un numero: ");
            scanf("%d",&numero2);
            if (numero2%2 == 0)
            {
                printf("\tEl numero es par "); break;
            }
            else
            {
                printf("El numero es impar"); break;
            }

        case 3: printf("Saliendo..."); break;
    }
    return 0;
}