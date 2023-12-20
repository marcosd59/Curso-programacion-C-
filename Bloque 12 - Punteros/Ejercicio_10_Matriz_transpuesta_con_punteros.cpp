/* 10. Realice un programa que lea una matriz dinammica de nxm y cree su matriz trasnpuesta.
Nota: La matriz trasnpuesta es aquella en la que la columna i era la fila i de la matriz original. */

#include <stdlib.h>
#include <stdio.h>

void pedirDATOS();
void mostrarMATRIZ(int **, int, int);

int **puntero_matriz, nfilas, ncol;

int main()
{
    pedirDATOS();
    mostrarMATRIZ(puntero_matriz, nfilas, ncol);

    // Liberar memoria que hemos usado en la matriz
    
    for (int i = 0; i < nfilas; i++)
    {
        delete[] puntero_matriz[i];
    }

    return 0;
}
void pedirDATOS()
{
    printf("\n******DATOS DE LA MATRIZ*******\n");
    printf("\nDigite el numero de filas: ");
    scanf("%d", &nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d", &ncol);

    // Reservando memoria para la matriz dinamica
    puntero_matriz = new int *[nfilas]; // Reservando memoria para las filas

    for (int i = 0; i < nfilas; i++)
    {
        puntero_matriz[i] = new int[ncol]; // Reservando memoria para las columnas
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
    printf("\nMostrando Matriz original\n\n");

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", puntero_matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Mostrando Matriz transpuesta\n\n");

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", puntero_matriz[j][i]);
        }
        printf("\n");
    }
}