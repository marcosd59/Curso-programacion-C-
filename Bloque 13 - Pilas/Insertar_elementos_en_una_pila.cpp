// Insertar elemento en la pila

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarPILA(Nodo *&, int);

int main()
{
    Nodo *pila = NULL;

    int n1, n2;

    printf("\nDigite un numero: ");
    scanf("%d", &n1);
    agregarPILA(pila, n1);

    printf("\nDigite otro numero: ");
    scanf("%d", &n2);
    agregarPILA(pila, n2);

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