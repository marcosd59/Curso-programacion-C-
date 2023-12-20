// Busqueda binaria

#include <stdio.h>

int main()
{
    int numero[] = {1, 2, 3, 4, 5}; // Debe estar ordenado en orden ascendente.
    int inf, sup, mitad, dato;
    char bandera = 'F';

    // Algortimo de busqueda binaria

    inf = 0;
    sup = 5;
    dato = 4; // Dato a buscar dentro del arreglo.

    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;
        if (numero[mitad] == dato)
        {
            bandera = 'V';
            break;
        }
        if (numero[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (numero[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if (bandera == 'F')
    {
        printf("\nEl numero a buscar no existe en el arreglo\n");
    }
    else
    {
        printf("\nEl numero a buscar ha sido encontrado en la posicion: %d\n", mitad);
    }
    return 0;
}