/*
Fecha de creacion: 04/06/2021
Fecha de ultima actualizacion: 04/06/2021
Nombre del programa: Matriz
Nombre del programador: Marcos Damian Pool Canul
Descripcion: Lea un valor flotante por cada una de las m filas de una matriz que debe asignarle los valores a
sus correspondientes columnas usando los múltiplos de 1 a n. Los valores de m y n son definidos
también por el usuario.

Por ejemplo, si la matriz es de 3 filas x 4 columnas y los valores que da el usuario por cada fila son:
Para fila 1, si el valor del usuario es 5 entonces los valores de la columna serían = 5, 10, 15, 20
Para fila 2, si el valor del usuario es 2 entonces los valores de la columna serían = 2, 4, 6, 8
Para fila 3, si el valor del gusuario es 10 entonces los valores de la columna serían = 10, 20, 30, 40

Entradas: El valor de m y n
Salidas: Matriz y multiplos
*/

#include <stdio.h>

int main()
{
    int tabla[100][100],filas,columnas;

    printf("Ingrese el numero de las filas: ");
    scanf("%d",&filas);
    printf("Ingrese el numero de las columnas: ");
    scanf("%d",&columnas);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Elemento [%d, %d]: ",i,j);
            scanf("%d",&tabla[i][j]);
        }
        
    }
    
    printf("\nMostrando elemtos almacenados \n\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ",tabla[i][j]);
        }
        
        printf("\n");

    }

    printf("\n");

    return 0;
}