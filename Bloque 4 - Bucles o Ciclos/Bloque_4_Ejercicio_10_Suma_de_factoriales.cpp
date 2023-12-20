//10. Escriba un programa que calcule el valor de: 1! + 2! + 3!+...n! (Suma de factoriales)

#include <stdio.h>

int main()
{


    int numero = 3, suma = 0, factorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
        suma = suma + factorial;
    }
    
    printf("%d",suma);


    return 0;
}