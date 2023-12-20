/*1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla */

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    int longitud = 0;

    printf("\nIngresa una palabra: ");

    gets(palabra);

    longitud = strlen(palabra);

    if (longitud > 10)
    {
        printf("\nEl numero de elemetos de la palabra '%s' es: %d", palabra, longitud);
    }
    else
    {
        printf("\nLa palabra no es mayor a 10 elementos");
    }

    return 0;
}