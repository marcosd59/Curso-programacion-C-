/* 3. Realizar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros pares y su posicion de memoria. */

#include <stdio.h>

int main()
{
    int numeros[10], *dir_numeros;

    for (int i = 0; i < 10; i++)
    {
        printf("[%d]. Digite un numero: ", i);
        scanf("%d", &numeros[i]);
    }

    dir_numeros = numeros; // Primera posicion de memoria donde comienza.

    for (int i = 0; i < 10; i++)
    {
        if (*dir_numeros % 2 == 0)
        {
            printf("\nEl numero %d es par", *dir_numeros);
            printf("\nPosicion de memoria: %d", dir_numeros);
        }
        
        dir_numeros++;
    }
    return 0;
}