// Ordenamiento por insercion.

#include <stdio.h>

int main()
{
    int numero[] = {4, 2, 3, 1, 5};
    int i, pos, aux;

    for (int i = 0; i < 5; i++)
    {
        pos = i;
        aux = numero[i];
        while ((pos > 0) && (numero[pos - 1] > aux))
        {
            numero[pos] = numero[pos - 1];
            pos--;
        }
        numero[pos] = aux;
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
