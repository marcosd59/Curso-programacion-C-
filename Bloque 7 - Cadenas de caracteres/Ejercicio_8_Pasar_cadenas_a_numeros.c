/* 8. Pedir al usuario 2 cadenas de caracteress de numeros, uno entero y uno real,
convertirlos a sus respectivos valores y por ultimo sumarlos. */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char cad[] = "123";
    char cad2[] = "123.8";
    int numero;
    float numero2;

    printf("\nIngrese una cadena de numeros enteros: ");
    gets(cad);

    printf("\nIngrese una cadena de numeros reales: ");
    gets(cad2);

    numero = atoi(cad);
    numero2 = atof(cad2);

    numero2 += numero;

    printf("\nLa suma de las dos cadenas es: %.2f\n",numero2);

    return 0;
}