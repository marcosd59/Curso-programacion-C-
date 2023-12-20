/* 1. Crea una lista que almacene "n" numeros enteros y calcular el menor y el mayor de ellos. */

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLISTA(Nodo *&, int);
void mostrarLISTA(Nodo *);
void calcularMAYOR_MENOR(Nodo *);

int main()
{
    int dato = 0;
    char respuesta;
    Nodo *lista = NULL;

    printf("\nCalcular el mayor y el menor elemento de una lista.\n");
    printf("\nCrear una lista de numeros.\n");

    do
    {
        printf("\nDigite un numero: ");
        scanf("%d", &dato);
        insertarLISTA(lista, dato);

        printf("\nDesea agregar otro nodo (s/n)?: ");
        scanf("%s", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    printf("\nLos elementos de la lista son: ");
    mostrarLISTA(lista);

    calcularMAYOR_MENOR(lista);

    return 0;
}

void insertarLISTA(Nodo *&lista, int n) // Agregar elementos al final de la lista.
{
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL) // Si la lista esta vacia agregamos el primer elemento a la lista;
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux = lista;                   // aux apunta al inicio de la lista.
        while (aux->siguiente != NULL) // Recoremos la lista.
        {
            aux = aux->siguiente; // Avanzamos posiciones en la lista.
        }
        aux->siguiente = nuevo_nodo; // Agregamos el nuevo nodo a la lista.
    }
    printf("\nElemento %d agregado a la lista correctamente.\n", n);
}

void mostrarLISTA(Nodo *lista)
{
    while (lista != NULL) // Mientras no sea el final de la lista.
    {
        printf("%d -> ", lista->dato);
        lista = lista->siguiente; // Avanzamos una posicion en la lista.
    }
}

void calcularMAYOR_MENOR(Nodo *lista)
{
    int mayor = 0, menor = 999;

    while (lista != NULL) // Recoremos la lista.
    {
        if ((lista->dato) > mayor) // Calculando el mayor elemento de la lista.
        {
            mayor = lista->dato;
        }
        if ((lista->dato) < menor) // Calculando el menor elemento de la lista.
        {
            menor = lista->dato;
        }
        lista = lista->siguiente; // Avanzamos una posicion en lista.
    }
    printf("\n\nEl mayor elemento es: %d\n", mayor);
    printf("El menor elemento es: %d\n", menor);
}