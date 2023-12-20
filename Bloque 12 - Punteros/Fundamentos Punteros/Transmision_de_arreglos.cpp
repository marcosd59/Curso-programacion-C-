/* Trasnmision de arreglos

Ejemplo: Hallar el maximo elemento de un arreglo. */

#include <stdio.h>

int hallarMAX(int *, int);

int main()
{
    const int nElementos = 5;
    int numeros[nElementos] = {3, 5, 2, 8, 1};

    printf("\nEl mayor elemento del vector es: %d\n", hallarMAX(numeros, nElementos));

    return 0;
}

int hallarMAX(int *dirvec, int nElementos)
{
    int max = 0;

    for (int i = 0; i < nElementos; i++)
    {
        if (*(dirvec + i) > max)
        {
            max = *(dirvec + i);
        }
    }
    
    return max;
}