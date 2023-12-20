//7. Escriiba un prgrama que calcule el valor de: 1+2+3+...n

#include <stdio.h>

int main(){


    int n = 10,suma = 0;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    
    printf("%d",suma);


    return 0;
}