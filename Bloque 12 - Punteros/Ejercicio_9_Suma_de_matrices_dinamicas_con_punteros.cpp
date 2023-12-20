/* 9. Realice un programa que calcule la suma de dos matrices dinamicas. */

#include <stdio.h>
#include <stdlib.h>

void pedirDATOS();
void sumarMATRICES(int **, int **, int, int);
void mostrarMATRIZ(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, nfilas, ncol;

int main()
{
    pedirDATOS();
    sumarMATRICES(puntero_matriz1, puntero_matriz2, nfilas, ncol);
    mostrarMATRIZ(puntero_matriz1, nfilas, ncol);

    // Liberar memoria que hemos usado en la matriz.
    for (int i = 0; i < nfilas; i++)
    {
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz2;

    // Liberar memoria que hemos usado en la matriz.
    for (int i = 0; i < nfilas; i++)
    {
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1;

    return 0;
}
void pedirDATOS()
{
    printf("\n******PRIMERA MATRIZ*******\n");
    printf("\nDigite el numero de filas: ");
    scanf("%d", &nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d", &ncol);

    // Reservando memoria para la primera matriz dinamica.
    puntero_matriz1 = new int *[nfilas]; // Reservando memoria para las filas.

    for (int i = 0; i < nfilas; i++)
    {
        puntero_matriz1[i] = new int[ncol]; // Reservando memoria para las columnas.
    }

    printf("\nDigitando elementos de la primera matriz\n\n");

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d", &puntero_matriz1[i][j]); // Es igual a: *(*(puntero_matriz+i)+j)
        }
    }

    /***************SEGUNDA MATRIZ**************/

    printf("\n******SEGUNDA MATRIZ*******\n");
    printf("\nDigite el numero de filas: ");
    scanf("%d", &nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d", &ncol);    

    // Reservando memoria para la seguda matriz dinamica
    puntero_matriz2 = new int *[nfilas]; // Reservando memoria para las filas

    for (int i = 0; i < nfilas; i++)
    {
        puntero_matriz2[i] = new int[ncol]; // Reservando memoria para las columnas
    }

    printf("\nDigitando elementos de la segunda matriz\n\n");

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d", &puntero_matriz2[i][j]); // Es igual a: *(*(puntero_matriz+i)+j)
        }
    }
}
void sumarMATRICES(int **puntero_matriz1, int **puntero_matriz2, int nfilas, int ncol)
{
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            puntero_matriz1[i][j] += puntero_matriz2[i][j]; // Es igual a: puntero_matriz[i][j]
        }
    }
}
void mostrarMATRIZ(int **puntero_matriz1, int nfilas, int ncol)
{
    printf("\nImprimiendo la suma de la matriz\n\n");
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", puntero_matriz1[i][j]); // Es igual a: *(*(puntero_matriz+i)+j)
        }
        printf("\n");
    }
}