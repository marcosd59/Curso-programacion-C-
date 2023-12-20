/* 6. Hacer una funcion para almacenar n numeros en un arreglo dinamico, posteriormente en otra funcion buscar un numero en particular.

Nota: Puedes utilizar cualquier metodo de busqueda (Secuencial o binaria). */

#include <stdio.h>
#include <stdlib.h>

void pedirDATOS();
void buscarARREGLO(int *, int);
void mostrarARREGLO(int *, int);

int *elementos, nElementos;

int main()
{
    pedirDATOS();
    buscarARREGLO(elementos, nElementos);
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
        printf("[%d]. Digite un numero: ", i + 1);
        scanf("%d", &*(elementos + i)); // Es lo mismo que: elemento[i].
    }
}

void buscarARREGLO(int *elementos, int nElementos)
{
    int dato, i = 0;
    char bandera = 'F';

    // Busqueda secuencial.

    printf("\nIngrese el numero que desea buscar dentro del arreglo: ");
    scanf("%d", &dato);

    while ((bandera == 'F') && (i < nElementos))
    {
        if (elementos[i] == dato)
        {
            bandera = 'V';
        }
        i++;
    }

    if (bandera == 'F')
    {
        printf("\nEl numero a buscar no existe en el arreglo\n");
    }
    else
    {
        printf("\nEl numero a buscar ha sido encontrado en la posicion: %d\n", i);
    }
}

void mostrarARREGLO(int *elementos, int nElementos)
{
    printf("\n.:Mostrando arreglo completo:.\n");

    for (int i = 0; i < nElementos; i++)
    {
        printf("%d ", *(elementos + i));
    }
}