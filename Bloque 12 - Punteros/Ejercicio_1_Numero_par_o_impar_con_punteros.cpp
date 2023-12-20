/* 1. Comprobar si un numero es par o impar y señalar la posicion de memoria donde se esta guardando el numero. Con punteros. */

#include <stdio.h>

int main()
{
    int numero, *dir_numero;

    printf("\nDigite un numero: ");
    scanf("%d", &numero);

    dir_numero = &numero; // Guardando la posicion de memoria.

    if (*dir_numero % 2 == 0)
    {
        printf("\nEl numero %d es par", *dir_numero);
        printf("\nLa posicion es: %d", dir_numero);
    }
    
    else
    {
        printf("\nEl numero %d es impar", *dir_numero);
        printf("\nLa posicion es: %d", dir_numero);
    }
    return 0;
}