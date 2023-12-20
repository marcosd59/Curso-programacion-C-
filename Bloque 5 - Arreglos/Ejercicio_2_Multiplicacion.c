/* 2. Escribe un programa que defina un vecto de numeros y calcule la multiplicacion acumulada de sus elementos. */

#include <stdio.h>

int main()
{

    int numero[] = {1, 2, 3, 4, 5};
    int multiplicacion = 1;

    for (int i = 0; i < 5; i++)
    {
        multiplicacion *= numero[i];
    }

    printf("La multiplicacion es: %d", multiplicacion);

    return 0;
}