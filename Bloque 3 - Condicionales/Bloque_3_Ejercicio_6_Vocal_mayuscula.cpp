/* 6. Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal mayuscula o no es una vocal*/

#include <stdio.h>

int main(){

    char letra = 'O';

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c Es una vocal minuscula",letra);
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c Es una vocal MAYUSCULA",letra);
        break;
    default:
        printf("%c No es una vocal",letra);
        break;
    }




    return 0;
}