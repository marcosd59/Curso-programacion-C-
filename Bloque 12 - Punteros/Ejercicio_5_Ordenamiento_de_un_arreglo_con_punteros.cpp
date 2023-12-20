/* 5. Pedir al usuario n numeros, almacenarlos en un arreglo dinamico posteriormente ordenar los numeros en orden ascendente y mostrar en pantalla.

Nota: Utilizar cualquier metodo de ordenamiento. */

#include <stdio.h>
#include <stdlib.h>

void pedirDATOS();               // Prototipo de la funcion.
void ordenarARREGLO(int *, int); // Prototipo de la funcion.
void mostrarARREGLO(int *, int); // Prototipo de la funcion.

int nElementos, *elementos;

int main()
{
    pedirDATOS();
    ordenarARREGLO(elementos, nElementos);
    mostrarARREGLO(elementos, nElementos);

    delete[] elementos; // Liberar memoria utilizada en el arreglo.

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite el numero de elementos del arreglo: ");
    scanf("%d", &nElementos);

    elementos = new int[nElementos];

    for (int i = 0; i < nElementos; i++)
    {
        printf("[%d]. Digite un numero: ", i);
        scanf("%d", &*(elementos + i)); // Es lo mismo que: elemento[i].
    }
}

void ordenarARREGLO(int *elementos, int nElementos)
{
    int aux;

    for (int i = 0; i < nElementos; i++)
    {
        for (int j = 0; j < nElementos - 1; j++)
        {
            if (*(elementos + j) > *(elementos + j + 1)) // Elementos[j] > elemento [j+1].
            {
                aux = *(elementos + j);
                *(elementos + j) = *(elementos + j + 1);
                *(elementos + j + 1) = aux;
            }
        }
    }
}

void mostrarARREGLO(int *elementos, int nElementos)
{
    printf("\nMostrando arreglo ordenado\n");

    for (int i = 0; i < nElementos; i++)
    {
        printf("%d ", *(elementos + i));
    }
}