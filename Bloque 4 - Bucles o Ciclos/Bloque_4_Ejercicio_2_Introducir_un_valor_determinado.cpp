/* 2. Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos. */

#include <stdio.h>

int main()
{

    int num, contador = 0;

    do
    {
        printf("\nEscriba un numero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            contador++;
        }
    } while (num != 0);

    printf("El numero de valores mayores de 0 son: %d", contador);

    return 0;
}