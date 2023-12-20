/* 7. Desarrolla un programa que determine si una mateiz es simetrica o no.
Una matriz es simetrica si es cuadrada y is es igual a su matriz transpuesta.

|8 1 3|     |8 1 3|
|1 7 4| --> |1 7 4|
|3 4 9|     |3 4 9|

*/

#include <stdio.h>

int main()
{

    int tabla[100][100], filas, columnas;
    char band = 'F';

    printf("Ingrese el numero de las filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de las columnas: ");
    scanf("%d", &columnas);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }

    if (filas == columnas)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                if (tabla[i][j] == tabla[j][i])
                {
                    band = 'V';
                }
            }
        }
    }

    if (band == 'V')
    {
        printf("\nLa matriz es simetrica\n");
    }
    else
    {
        printf("\nLa matriz no es simetrica\n");
    }

    return 0;
}