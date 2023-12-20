/* 3. Pedir al usuario que digite 2 cadenas de caracteres, e, indicar si ambas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente. */

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra1[50];
    char palabra2[50];

    printf("\nDame la primera palabra: ");
    gets(palabra1);

    printf("\nDame la segunda palabra: ");
    gets(palabra2);

    if (strcmp(palabra1,palabra2)==0)
    {
        printf("\nLas cadenas son iguales");
    }
    else
    {
        strcmp(palabra1,palabra2) > 0;
        printf("\nLas cadenas no son iguales\n");
        printf("\nLa palabra %s esta despues alfabeticamente\n");
    }

    return 0;
}