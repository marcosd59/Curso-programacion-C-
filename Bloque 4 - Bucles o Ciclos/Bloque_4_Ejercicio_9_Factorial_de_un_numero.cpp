// 9. Escriba un programa que calule el valor de: 1*2*3*...n (factorial)

//5! = 5*4*3*2*1 = 120

#include <stdio.h>

int main()
{

    int numero = 5, factorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    
    printf("%d",factorial);


    return 0;
}