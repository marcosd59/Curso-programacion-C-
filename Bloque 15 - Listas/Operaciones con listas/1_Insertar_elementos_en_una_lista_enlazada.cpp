// Insertar elementos en una lista enlazada.

#include <stdio.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLISTA(Nodo *&, int);

int main()
{
    Nodo *lista = NULL;
    int dato = 0;

    printf("\nDigite un numero: ");
    scanf("%d", &dato);
    insertarLISTA(lista, dato);

    return 0;
}

void insertarLISTA(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); // 1. Crear un nuevo nodo.
    nuevo_nodo->dato = n;          // 2. Asignar a nuevo_nodo->dato el elemento que queremos incluir a la lista.
    Nodo *aux1 = lista;            // 3. Crear dos nodos auxiliares y asignar "lista" al primero de ellos.
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n)) // 4. Insertar el elemento en la lista.
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    printf("\nElemento %d se ha insertado a lista correctamente.\n", n);
}