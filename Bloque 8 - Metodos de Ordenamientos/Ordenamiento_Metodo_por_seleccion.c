// Ordenamiento por seleccion

#include <stdio.h>

int main()
{
    int numero[] = {4, 2, 3, 1, 5};
    int min, aux;

    for (int i = 0; i < 5; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (numero[j] < numero[min])
            {
                min = j;
            }
        }
        aux = numero[i];
        numero[i] = numero[min];
        numero[min] = aux;
    }

    printf("\nOrden Ascendente\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numero[i]);
    }

    printf("\nOrden Descendente\n");

    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", numero[i]);
    }

    return 0;
}