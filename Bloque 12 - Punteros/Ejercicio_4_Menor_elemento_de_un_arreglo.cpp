/* 4. Rellenar un arreglo con n numeros, posteriormente utilizando punteros determina el menor elemento del arreglo. */

#include <stdio.h>

int main()
{
    int numeros[100], n, *dir_numeros, menor;

    printf("\nIngrese el numero de elementos del vector: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("[%d]. Digite un numero: ", i);
        scanf("%d", &numeros[i]);
    }

    dir_numeros = numeros; // Posicion de memoria.
    menor = *dir_numeros;  // Puntero de numero.

    for (int i = 0; i < n; i++)
    {
        if (*dir_numeros < menor)
        {
            menor = *dir_numeros;
        }

        dir_numeros++;
    }

    printf("\nEl numero \'%d\' es el menor", menor);
    printf("\nPosicion de memoria: %d", dir_numeros);

    return 0;
}