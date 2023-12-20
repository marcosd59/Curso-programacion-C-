// 8. Escriba un programa que calcule el valor de: 1+3+5+...2n-1

#include <stdio.h>

int main()
{


    int n = 4,suma = 0;

    n = 2*n-1;

    for (int i = 1; i <= n; i = i + 2)
    {
        suma += i;
    }
    
    printf("%d",suma);


    return 0;
}