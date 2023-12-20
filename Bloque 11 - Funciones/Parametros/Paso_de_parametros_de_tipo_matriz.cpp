// Paso de parametro de tipo matriz

// Elevar al cuadrado todos los elementos de una matriz

#include <stdio.h>

void mostrarMATRIZ(int m[2][3], int, int);
void calcularCUADRADO(int m[2][3], int, int);
void mostrarMATRIZELEVADA(int m[2][3], int, int);

int main()
{
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1, 2, 3}, {4, 5, 6}};

    mostrarMATRIZ(m, NFILAS, NCOL);
    calcularCUADRADO(m, NFILAS, NCOL);
    mostrarMATRIZELEVADA(m, NFILAS, NCOL);

    return 0;
}

void mostrarMATRIZ(int m[][3], int nfilas, int ncol)
{
    printf("\nMOSTRANDO MATRIZ ORIGINAL\n\n");
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void calcularCUADRADO(int m[][3], int nfilas, int ncol)
{
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            m[i][j] *= m[i][j];
        }
    }
}

void mostrarMATRIZELEVADA(int m[][3], int nfilas, int ncol)
{
    printf("\nMOSTRANDO MATRIZ ELEVADA AL CUADRADO ^2\n\n");
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}