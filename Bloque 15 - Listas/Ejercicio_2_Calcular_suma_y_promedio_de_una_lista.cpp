/* 2. Crear una lista que almacene "n" números reales  y calcular su suma y promedio. */

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLISTA(Nodo *&, float);
void mostrarLISTA(Nodo *);
void calcular_SUMA_Y_PROMDEDIO(Nodo *);

int main()
{
    float dato = 0;
    char respuesta;
    Nodo *lista = NULL;

    printf("\n>> Calcular el mayor y el menor elemento de una lista <<\n");
    printf(">> Crear una lista de numeros <<\n");

    do
    {
        printf("\nDigite un numero: ");
        scanf("%f", &dato);
        insertarLISTA(lista,dato);

        printf("\nDesea agregar otro nodo (s/n)?: ");
        scanf("%s", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    printf("\nLos elementos de la lista son: ");
    mostrarLISTA(lista);

    calcular_SUMA_Y_PROMDEDIO(lista);

    return 0;
}

void insertarLISTA(Nodo *&lista, float n) //Agregar elementos al final de la lista.
{
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL) //Si la lista esta vacia agregamos el primer elemento a la lista;
    {
        lista = nuevo_nodo;
    }

    else
    {
        aux = lista; //aux apunta al inicio de la lista.
        while (aux->siguiente != NULL) //Recoremos la lista.
        {
            aux = aux->siguiente; //Avanzamos posiciones en la lista.
        }
        aux->siguiente = nuevo_nodo; //Agregamos el nuevo nodo a la lista.
    }
    printf("\nElemento %.2f agregado a la lista correctamente.\n",n);
}

void mostrarLISTA(Nodo *lista)
{
    while (lista != NULL) //Mientras no sea el final de la lista.
    {
        printf("%d -> ",lista->dato);
        lista = lista->siguiente; //Avanzamos una posicion en la lista.
    }
}

void calcular_SUMA_Y_PROMDEDIO(Nodo *lista)
{
    float suma = 0, promedio = 0;
    int contador = 0;

    while (lista != NULL) //Mientras no sea el final de la lista.
    {
        suma += lista->dato; //Suma iterativa.
        contador++; //Aumentamos el contador de elementos de la lista.
        lista = lista->siguiente; //Avanzamos en la lista.
    }

    promedio = suma / contador;

    printf("\n\nLa suma de todos los elementos de la lista es: %.2f\n",suma);
    printf("El promedio de todos los elementos de la lista es: %.2f\n",promedio);
}