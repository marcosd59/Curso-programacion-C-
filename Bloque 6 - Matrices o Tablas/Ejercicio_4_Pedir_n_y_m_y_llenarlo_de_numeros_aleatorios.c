/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en
pantalla.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int matriz[100][100], filas, columnas;
    int matriz2[100][100], dato = 0;

    printf("Ingrese el numero de las filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de las columnas: ");
    scanf("%d", &columnas);

    srand(time(NULL));

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            dato = 1 + rand() % (100); // numeros aleatorios de 1 a 100
            matriz[i][j] = dato;
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = matriz[i][j];
        }
    }

    printf("\nMostrando elemtos almacenados \n\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz2[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}