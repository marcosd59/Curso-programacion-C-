// Busqueda secuencial en un arreglo

// a[5] = {1,2,3,4,5}; dato = 4;

#include <stdio.h>

int main()
{

    int a[] = {5, 2, 3, 4, 1};
    int dato, i;
    char bandera = 'F';

    // Busqueda secuencial

    i = 0;
    dato = 2; // Valor a buscar dentro del arreglo.

    while ((bandera == 'F') && (i < 5))
    {
        if (a[i] == dato)
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
        printf("\nEl numero a buscar ha sido encontrado en la posicion: %d\n", i - 1);
    }

    return 0;
}