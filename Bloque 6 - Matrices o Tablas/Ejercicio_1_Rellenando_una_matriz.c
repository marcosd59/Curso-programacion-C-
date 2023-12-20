/* 1. Hacer un programa para rellenar una matriz pidiendo al usuario el numero
de filas y columnas, posteriormente mostrar la matriz en pntalla*/

#include <stdio.h>

int main()
{
    int tabla[100][100], filas, columnas;

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

    printf("\nMostrando elemtos almacenados \n\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", tabla[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}