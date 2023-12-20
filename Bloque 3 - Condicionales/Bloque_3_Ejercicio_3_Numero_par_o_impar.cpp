/* 3. Realice un programa que lea un valor entero y determine si se trata de un
numero par o impar*/

#include <stdio.h>

int main()
{
    long numero = 18;

    if (numero == 0)
    {
        printf("El numero es cero");
    }
    else if (numero%2==0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
    
    return 0;
}