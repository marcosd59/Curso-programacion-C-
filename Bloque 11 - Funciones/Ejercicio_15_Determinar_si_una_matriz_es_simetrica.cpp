/* 15. Desarrollar una funcion que determine si una matriz es simetrica o no.

Una matriz es simetrica:  A = A^t

- La matriz debe ser cuadrado. Ejm 3 x 3
- Aij = Aji

|2 5 9|     |2 5 9|
|5 8 1| --> |5 8 1|
|9 1 7|     |9 1 7|

*/

void pedirDATOS();
void comprobarSIMETRIA(int m[100][100], int, int);

int m[100][100], nfilas, ncol;

#include <stdio.h>

int main()
{
    pedirDATOS();
    comprobarSIMETRIA(m, nfilas, ncol);

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite el numero de filas: ");
    scanf("%d", &nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d", &ncol);

    printf("\n");

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("Digite un numero [%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
}

void comprobarSIMETRIA(int m[][100], int nfilas, int ncol)
{
    int cont = 0;

    if (nfilas == ncol)
    {
        for (int i = 0; i < nfilas; i++)
        {
            for (int j = 0; j < ncol; j++)
            {
                if (m[i][j] == m[j][i])
                {
                    cont++;
                }
            }
        }
    }

    if (cont == nfilas * ncol)
    {
        printf("\n.:La matriz es SIMETRICA:.");
    }
    else
    {
        printf("\n.:La matriz NO ES SIMETRICA:.");
    }
}