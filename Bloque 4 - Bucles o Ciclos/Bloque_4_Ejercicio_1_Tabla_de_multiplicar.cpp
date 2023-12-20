/* 1. Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar su tabla de multplicar. */

#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Digite un numero: ");
        scanf("%d", &numero);
    } while ((numero <= 1) || (numero >= 10));

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", numero, i, numero * i);
    }

    return 0;
}