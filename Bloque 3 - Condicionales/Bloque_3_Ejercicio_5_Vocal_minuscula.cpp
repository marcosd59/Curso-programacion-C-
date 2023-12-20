/* 5. Escriba un programa que lea de la entrada estandar un caracter e indique en
la salida estandar si el caracter es una vocal minuscula o no. */

#include <stdio.h>

int main(){

    char letra = 'a';

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c Es una vocal minuscula",letra);
        break;
    default:
        printf("%c No es una vocal minuscula",letra);
        break;
    }



    return 0;
}