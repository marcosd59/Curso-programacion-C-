/*1. Escribe un programa que lea de la entrada estandar dos numeros y muestre
en la salida estandar la suma, resta, multiplicacion y division.*/

#include <stdio.h>

int main()
{
    int n1 = 15;
    int n2 = 2;
    int suma = 0, resta = 0, multiplicacion = 0;
    float division;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1*n2;
    division = n1/n2;

    printf("La suma de %d y %d es igual a: %d",n1,n2,suma);
    printf("\n");
    printf("La resta de %d y %d es igual a: %d",n1,n2,resta);
    printf("\n");
    printf("La multiplicacion de %d y %d es igual a: %d",n1,n2,multiplicacion);
    printf("\n");
    printf("La division de %d y %d es igual a: %f",n1,n2,division);
    printf("\n");


    return 0;
}