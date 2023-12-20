/* 1. Hacer un programa para agregar numeros enteros a una pila, hasta que el usuario lo decida despues mostrar todos los numeros introducidos en la pila. */

#include <stdio.h>

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
    int dato = 0;
    char respuesta;

    do
    {
        printf("\nDigite un numero: ");
        scanf("%d", &dato);
        agregarPILA(pila, dato);

        printf("\nDeseas agregar otro elemento a pila (s/n)?: ");
        scanf("%s", &respuesta);

    } while ((respuesta == 'S') || (respuesta == 's'));

    printf("\n----- Sacando todos los elementos de la pila -----\n\n");

    while (pila != NULL) // Mientras no sea el final de la pila
    {
        sacarPILA(pila, dato);
        if (pila != NULL)
        {
            printf(" %d,", dato);
        }
        else
        {
            printf(" %d.", dato);
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

    printf("\n.:El elemento \"%d\" ha sido agregado a pila correctamente:.\n", n);
}

void sacarPILA(Nodo *&pila, int &n)
{
    Nodo *aux = pila;      // 1. Crear una variable *aux de tipo Nodo.
    n = aux->dato;         // 2. Igualar el n a aux->dato.
    pila = aux->siguiente; // 3. Pasar pila a siguiente nodo.
    delete aux;            // 4. Eliminar aux.
}