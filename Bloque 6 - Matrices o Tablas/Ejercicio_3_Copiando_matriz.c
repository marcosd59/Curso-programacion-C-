/* 3. Hacer una matriz de tipo entera de 2 * 2, llenarla de numeros y luego
copiar todo su contenido hacia otra matriz */

#include <stdio.h>

int main()
{

    int tabla[2][2];
    int matriz[2][2];
    
    printf("\nMatriz de 2 x 2, Ingresa los valores que deseas copiar de matriz 1 a matriz 2\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Elemento [%d, %d]: ",i,j);
            scanf("%d",&tabla[i][j]);
        }
        
    }

    //Copaindo el contenido de "tabla" a "matriz"

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz[i][j] = tabla[i][j]; //Copiando
        }
        
    }
    
    
    printf("\nMostrando elemtos almacenados en la matriz 2 \n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        
        printf("\n");

    }

    printf("\n");



    return 0;
}