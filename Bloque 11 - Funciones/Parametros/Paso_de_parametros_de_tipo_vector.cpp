/* Paso de parametros de tipo vector

Parametros de la funcion:
    void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo);

Llamada a la funcion:
    nombreDeFuncion(nombreArreglo, tamñoArreglo);

*/

// Cuadrados de los elementos del vector.

#include <stdio.h>

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main()
{
    const int TAM = 5;
    
    int vect[TAM] = {1, 2, 3, 4, 5};

    cuadrado(vect, TAM);
    muestra(vect, TAM);

    return 0;
}

void cuadrado(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = vec[i] * vec[i];
    }
}

void muestra(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
}