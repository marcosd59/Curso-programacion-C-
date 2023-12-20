/* 1. Escriba un programa que lea dos numeros y determine cual de ellos es mayor*/

#include <stdio.h>

int main(){


    int n1 = 100;
    int n2 = 100;

    if (n1 == n2)
    {
        printf("Ambos numeros son iguales");
    }
    else if (n1 > n2)
    {
        printf("El numero mayor es: %d",n1);
    }
    else
    {
        printf("El numero mayor es: %d",n2);
    }
    



    return 0;
}