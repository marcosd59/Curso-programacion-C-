#include <stdio.h>

int main()
{
    int tabla[3][4];

    printf("Ingrese valores para la matriz de 3 x 4\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }

    printf("\nMostrando elemtos almacenados \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", tabla[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}