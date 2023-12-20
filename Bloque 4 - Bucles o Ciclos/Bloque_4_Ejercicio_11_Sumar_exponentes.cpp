//11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <stdio.h>
#include <math.h>

int main()
{


    int n = 4, suma = 0, eleveacion = 0;

    for (int i = 1; i <= n; i++)
    {
        eleveacion = pow(2,i);
        suma += eleveacion;
    }
    
    printf("La suma total es: %d",suma);


    return 0;
}