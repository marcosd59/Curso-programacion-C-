// Metodo burbuja.

#include <stdio.h>

int main()
{
    int numero[] = {9, 5, 4, 7, 8, 1, 3, 2, 6, 10};
    int aux;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numero[j] > numero[j + 1])
            {
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }

    printf("\nOrden Ascendente\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numero[i]);
    }

    printf("\nOrden Descendente\n");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", numero[i]);
    }

    return 0;
}