/* Matrices dinamicas

Ejemplo: Rellenar una matriz de N x M y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int]
                    *puntero_fila -> [int] [int]
                    *puntero_fila -> [int] [int]

1 2 3       1 -> 2 3
4 5 6       4 -> 5 6
7 8 9       7 -> 7 8

*/

#include <stdio.h>
#include <stdlib.h>

void pedirDATOS();
void mostrarMATRIZ(int **, int, int);

int **puntero_matriz, nfilas, ncol;

int main()
{
    pedirDATOS();
    mostrarMATRIZ(puntero_matriz, nfilas, ncol);

    // Liberar memoria que hemos usado en la matriz.

    for (int i = 0; i < nfilas; i++)
    {
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite el numero de filas: ");
    scanf("%d", &nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d", &ncol);

    // Reservando memoria para la matriz dinamica.

    puntero_matriz = new int *[nfilas]; // Reservando memoria para las filas.

    for (int i = 0; i < nfilas; i++)
    {
        puntero_matriz[i] = new int[ncol]; // Reservando memoria para las columnas.
    }

    printf("\nDigitando elementos de la matriz\n\n");

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d", &puntero_matriz[i][j]); // Es igual a: *(*(puntero_matriz+i)+j)
        }
    }
}

void mostrarMATRIZ(int **puntero_matriz, int nfilas, int ncol)
{
    printf("\nImprimiendo matriz\n\n");
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", puntero_matriz[i][j]); // Es igual a: *(*(puntero_matriz+i)+j)
        }
        printf("\n");
    }
}