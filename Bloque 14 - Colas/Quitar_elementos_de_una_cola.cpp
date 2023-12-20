// Quitar elementos de una cola

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarCOLA(Nodo *&, Nodo *&, int);
void quitarCOLA(Nodo *&, Nodo *&, int &);
bool cola_vacia(Nodo *);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato = 0;

    printf("\nDigite un numero: ");
    scanf("%d", &dato);
    insertarCOLA(frente, fin, dato);

    printf("\nDigite un numero: ");
    scanf("%d", &dato);
    insertarCOLA(frente, fin, dato);

    printf("\nDigite un numero: ");
    scanf("%d", &dato);
    insertarCOLA(frente, fin, dato);

    printf("\nQuintando los nodos de la cola: ");

    while (frente != NULL)
    {
        quitarCOLA(frente, fin, dato);

        if (frente != NULL)
        {
            printf("%d, ", dato);
        }
        else
        {
            printf("%d. ", dato);
        }
    }
    return 0;
}

void insertarCOLA(Nodo *&frente, Nodo *&fin, int n) // Funcion para insertar elementos en una cola
{
    Nodo *nuevo_nodo = new Nodo(); // 1. Crear espacio en memoria para almacenar un nodo.
    nuevo_nodo->dato = n;          // 2. Asignar ese nuevo nodo al dato que queremos insertar.
    nuevo_nodo->siguiente = NULL;  // 3. Asignar los punteros frente y fin hacia el nuevo nodo.

    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    printf("\nElemento %d insertado correctamente a la cola\n", n);
}
void quitarCOLA(Nodo *&frente, Nodo *&fin, int &n) // Funcion para eliminar elementos de la cola.
{
    n = frente->dato;   // 1. Obtener el valor del nodo.
    Nodo *aux = frente; // 2. Crear un nodo aux y asignarle el frente a la cola.

    if (frente == fin)
    {
        frente == NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }
    delete aux; // 3. Eliminar el nodo del frente de la cola.
}

bool cola_vacia(Nodo *frente) // Funcion para determinar si la cola esta vacia o no
{
    return (frente == NULL) ? true : false;
}