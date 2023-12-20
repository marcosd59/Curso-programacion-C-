/* 

Fecha de creacion: 05/06/2021
Fecha de ultima actualizacion: 05/06/2021
Nombre del programa: Matriz Dominante
Nombre del programador: Marcos Damian Pool Canul
Descripcion: 

Realice el diagrama de flujo y el programa en el lenguaje C que solucione el siguiente problema:
Indicar si una Matriz de valores positivos (nxn) es Estrictamente Dominante por filas.
Una matriz es estrictamente dominante por filas si el valor de cada elemento en la diagonal es
estrictamente mayor que la suma de los demás elementos en su fila. 

Por ejemplo: 

Si A = 
5.5 2.3 1.9
1.8 4.0 2.7
3.1 0.6 8

Entonces A es estrictamente dominante por filas

Si A =

5.5 2.3 1.9
1.8 2.0 2.7
3.1 0.6 8

Entonces A NO es estrictamente dominante por filas

Entradas: Matriz n x n
Salidas: Es dominante o no es dominante

*/

#include <stdio.h>

int main()
{

    int mat[3][3], cont, suma, dd;

    suma = 0;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Elemento [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            if (i == j)
            {
                dd = mat[i][j];
            }
            else
            {
                suma += mat[i][j];
            }

            if (dd > suma)
            {
                cont++;
            }
        }
    }

    if (cont == 3)
    {
        printf("La matriz es diagonalmente dominate por filas");
    }
    else
    {
        printf("La matriz no es diagonalmente dominate por filas");
    }

    return 0;
}