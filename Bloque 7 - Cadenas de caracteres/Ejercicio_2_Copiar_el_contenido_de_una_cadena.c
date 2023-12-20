/* 2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo 
y copiar todo su contenido hacia otro arreglo de caracteres. - Funcion strcpy */

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[50];
    char palabra2[50];

    printf("\nDame una palabra o frase: ");
    gets(palabra);

    strcpy(palabra2,palabra);

    printf("\nLa palabra es: %s",palabra2);

    return 0;
}