/*********************************************************************
Fecha de creacion: 10/12/2021
Fecha de ultima actualizacion: 10/12/2021
Nombre del programa: Arreglo 2^n.
Nombre del programador: Marcos Damian Pool Canul.
Descripcion: Porgrama que Calcula y almacenar un arreglo de cada valor de 2^n, donde n es un entero positivo de 0 a n, n ≤ 10.
Entradas: El valor de "n", n ≤ 10.
Salidas: El arreglo de 2^n.
*********************************************************************/

#include <stdio.h>
#include <math.h>

int main() // Programa principal
{

    int n = 5;                                       // Se inicio el numero de posiciones que se multiplicara el arreglo.
    int arreglo[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Se inicia el arreglo con 10 elementos, n ≤ 10.

    for (int i = 0; i <= n; i++)
    {
        arreglo[i] = pow(2, arreglo[i]); // La base 2 se multuplica por cada uno de los elementos del arreglo.
        printf("%d\t", arreglo[i]);      // Se imprimen los resultados de la multiplicacion del arreglo.
    }

    return 0;
}