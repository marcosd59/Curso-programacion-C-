/* 5. Hacer un programa que determine si una palabra es polindroma */

#include <string.h>
#include <stdio.h>

int main()
{
    char palabra[] = {"anitalavalatina"};
    char comparar[50];

    strcpy(comparar, palabra);
    strrev(palabra);

    if (strcmp(palabra, comparar) == 0)
    {
        printf("\nLa palabra si es polindroma\n");
    }
    else
    {
        printf("\nLa palabra no es polindroma\n");
    }

    return 0;
}