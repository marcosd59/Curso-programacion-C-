//12. Hacer un programa que calcule el resultado de las siguientes expresiones: 1-2+3-4+5-6..n

#include <stdio.h>

int main()
{

    int n = 4, suma = 0, signo = 1;

    for (int i = 1; i <= n; i++)
    {
        suma = suma + (i*signo);
        signo = signo * -1;
    }
    
    printf("La suma total es: %d",suma);




    return 0;
}