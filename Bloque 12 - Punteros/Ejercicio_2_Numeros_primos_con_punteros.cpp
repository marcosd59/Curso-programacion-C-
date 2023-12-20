/* 2. Determinar si un numero es primo o no con punteros y ademas indicar en que posicion de memoria se guardo el numero. */

#include <stdio.h>

int main()
{
    int numero, *dir_numero, cont = 0;

    printf("\nDigite un numero: ");
    scanf("%d", &numero);

    dir_numero = &numero; // Guardando la posicion de memoria

    for (int i = 1; i <= *dir_numero; i++)
    {
        if (*dir_numero % i == 0)
        {
            cont++;
        }
    }

    if (cont > 2)
    {
        printf("\nEL numero %d es compuesto", *dir_numero);
        printf("\nPosicion: %d\n", dir_numero);
    }
    else
    {
        printf("\nEL numero %d es primo", *dir_numero);
        printf("\nPosicion: %d\n", dir_numero);
    }

    return 0;
}