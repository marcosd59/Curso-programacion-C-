/* 4. Comprobar si un numero digitado por el usuario es positivo o negativo */

#include <stdio.h>

int main(){

    int numero = 50;


    if (numero == 0)
    {
        printf("El numero es 0");
    }
    else if (numero < 0)
    {
        printf("El numero es NEGATIVO");
    }
    else
    {
        printf("El numero es POSITIVO");
    }
    

    return 0;
}