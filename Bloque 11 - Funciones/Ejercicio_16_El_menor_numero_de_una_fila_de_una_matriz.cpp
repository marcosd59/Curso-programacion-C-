/* 16. Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor de los elementos almacenado en dicha fila.*/

#include <stdio.h>

void pedirDATOS();
int comprobarMenorElemento(int m[100][100], int, int);

int m[100][100], nfilas, ncol;

int main()
{
    pedirDATOS();

    printf("\nEl menor elemento de la fila seleccionada es: %d\n", comprobarMenorElemento(m, nfilas, ncol));

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
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int comprobarMenorElemento(int m[100][100], int nfilas, int ncol)
{
    int fila, menor = 99999;

    printf("\nDigite el numero de fila a comprobar: ");
    scanf("%d", &fila);

    fila = fila -1;

    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            if (i == fila)
            {
                if (m[i][j] < menor)
                {
                    menor = m[i][j];
                }
            }
        }
    }

    return menor;
}
