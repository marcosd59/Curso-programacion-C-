/* 1. EScribe un programa que defina un vector de numeros y calcule la suma de sus elemetos */

#include <stdio.h>

int main()
{

    int numero[] = {1, 2, 3, 4, 5};
    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        suma += numero[i];
    }

    printf("La suma es: %d", suma);

    return 0;
}