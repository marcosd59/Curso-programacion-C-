// Quitar elementos en una pila

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarPILA(Nodo *&, int);
void sacarPILA(Nodo *&, int &);

int main()
{
    Nodo *pila = NULL;
    int dato;

    printf("\nDigite un numero: ");
    scanf("%d", &dato);
    agregarPILA(pila, dato);

    printf("\nDigite otro numero: ");
    scanf("%d", &dato);
    agregarPILA(pila, dato);

    printf("\nSacando los elementos de la pila: \n");

    while (pila != NULL) // Mientras no sea el final de la pila
    {
        sacarPILA(pila, dato);

        if (pila != NULL)
        {
            printf("%d ", dato);
        }
        else
        {
            printf("%d.", dato);
        }
    }
    return 0;
}

void agregarPILA(Nodo *&pila, int n)
{
    Nodo *nuevo_nodo = new Nodo(); // 1. Crear el espacio en memoria para almacenar un nodo.
    nuevo_nodo->dato = n;          // 2. Cargar el valor dentro del nodo (dato).
    nuevo_nodo->siguiente = pila;  // 3. Cargar el puntero pila dentro del nido (*siguiente).
    pila = nuevo_nodo;             // 4. Asignar el nuevo nodo a pila.
    printf("\nElemento %d agregado correctamente a pila\n", n);
}

void sacarPILA(Nodo *&pila, int &n)
{
    Nodo *aux = pila;      // 1. Crear una variable *aux de tipo Nodo.
    n = aux->dato;         // 2. Igualar el n a aux->dato.
    pila = aux->siguiente; // 3. Pasar pila a siguiente nodo.
    delete aux;            // 4. Eliminar aux.
}