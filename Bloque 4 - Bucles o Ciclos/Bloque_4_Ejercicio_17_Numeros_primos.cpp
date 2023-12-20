// 17. Determinar si un numero es primo o no

#include <stdio.h>

int main()
{
    int numero = 59, cont = 0;

    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            cont++;
        }
    }

    if (cont > 2)
    {
        printf("\nEL numero es compuesto\n");
    }
    else
    {
        printf("\nEl numero es primo\n");
    }
    return 0;
}