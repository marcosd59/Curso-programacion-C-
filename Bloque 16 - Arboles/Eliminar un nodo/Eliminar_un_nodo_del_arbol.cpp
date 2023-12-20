// Eliminar un nodo del arbol - Parte 1.

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *derecha;
    Nodo *izquierda;
    Nodo *padre;
};
// Prototipos
void menu();
Nodo *crearNodo(int, Nodo *);            // Insertamos Nodo *
void insertarNODO(Nodo *&, int, Nodo *); // Insertamos Nodo *
void MostrarARBOL(Nodo *, int);
bool busqueda(Nodo *, int);
void PreOrden(Nodo *);
void InOrden(Nodo *);
void PostOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNODO(Nodo *);
Nodo *minimo(Nodo *);
void remplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main()
{
    menu();
    return 0;
}
void menu()
{
    int dato = 0, opcion = 0, contador = 0;

    do
    {
        printf("\n\t---> Menu <---\n");
        printf("1. Insertar un nuevo nodo.\n");
        printf("2. Mostrar el arbol completo.\n");
        printf("3. Buscar un elemento en el arbol.\n");
        printf("4. Recorrer el arbon en PreOrden.\n");
        printf("5. Recorrer el arbon en InOrden.\n");
        printf("6. Recorrer el arbon en PostOrden.\n");
        printf("7. Eliminar un nodo del arbol.\n");
        printf("8. Salir.\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\nDigite un numero: ");
            scanf("%d", &dato);
            insertarNODO(arbol, dato, NULL);
            printf("\n");
            system("pause");
            break;
        case 2:
            printf("\nMostrando el arbol completo\n\n");
            MostrarARBOL(arbol, contador);
            printf("\n");
            system("pause");
            break;
        case 3:
            printf("\nDigite el elemento a buscar: ");
            scanf("%d", &dato);
            if (busqueda(arbol, dato) == true)
            {
                printf("\nEl elemento '%d' ha sido encontrado :)", dato);
            }
            else
            {
                printf("\nEl elemento no ha sido encontrado :(", dato);
            }
            printf("\n");
            system("pause");
            break;
        case 4:
            printf("\nRecorrido en PreOrden: ");
            PreOrden(arbol);
            printf("\n\n");
            system("pause");
            break;
        case 5:
            printf("\nRecorrido en InOrden: ");
            InOrden(arbol);
            printf("\n\n");
            system("pause");
            break;
        case 6:
            printf("\nsRecorrido en PostOrden: ");
            PostOrden(arbol);
            printf("\n\n");
            system("pause");
            break;
        case 7:
            printf("\nDigite el numero a eliminar: ");
            scanf("%d", &dato);
            eliminar(arbol, dato);
            printf("\n");
            system("pause");
            break;
        case 8:
            printf("\nSaliendo...");
            break;
        default:
            printf("\nOpcion innvalida :\\");
            break;
        }
        system("cls");
    } while (opcion != 8);
}
Nodo *crearNodo(int n, Nodo *padre) // Funcion para crear un nuevo nodo.
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->derecha = NULL;
    nuevo_nodo->izquierda = NULL;
    nuevo_nodo->padre = padre;
    return nuevo_nodo;
}
void insertarNODO(Nodo *&arbol, int n, Nodo *padre) // Funcion para insertar elementos en el arbol.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    }
    else // Si el arbol tiene un nodo o mas.
    {
        int valorRAIZ = arbol->dato; // obtenemos el valor de la raiz.
        if (n < valorRAIZ)           // Si el elemento es menor a la raiz, insertamos a la izquierda.
        {
            insertarNODO(arbol->izquierda, n, arbol);
        }
        else // Si el elemento es mayor a la raiz, insertamos a la derecha.
        {
            insertarNODO(arbol->derecha, n, arbol);
        }
    }
}
void MostrarARBOL(Nodo *arbol, int cont)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        MostrarARBOL(arbol->derecha, cont + 1);
        for (int i = 0; i < cont; i++)
        {
            printf("  ");
        }
        printf("%d \n", arbol->dato);
        MostrarARBOL(arbol->izquierda, cont + 1);
    }
}
bool busqueda(Nodo *arbol, int n) // Funcion para buscar un elemento en el arbol.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        return false;
    }
    else if (arbol->dato == n) // Si el nodo es igual al elemento.
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        return busqueda(arbol->izquierda, n);
    }
    else
    {
        return busqueda(arbol->derecha, n);
    }
}
void PreOrden(Nodo *arbol) // Funcion para recorrido en profundidad - PreOrden.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        return;
    }
    else
    {
        printf("%d - ", arbol->dato);
        PreOrden(arbol->izquierda);
        PreOrden(arbol->derecha);
    }
}
void InOrden(Nodo *arbol) // Funcion para recorrido en profundidad - InOrden.
{
    if (arbol == NULL) // Si el arbol esta vacio
    {
        return;
    }
    else
    {
        InOrden(arbol->izquierda);
        printf("%d - ", arbol->dato);
        InOrden(arbol->derecha);
    }
}
void PostOrden(Nodo *arbol) // Funcion para recorrido en profundidad - PostOrden.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        return;
    }
    else
    {
        PostOrden(arbol->izquierda);
        PostOrden(arbol->derecha);
        printf("%d - ", arbol->dato);
    }
}
void eliminar(Nodo *arbol, int n) // Funcion para eliminar un nodo del arbol.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        return; // No hacemos nada.
    }
    else if (n < arbol->dato) // Si el valor es menor.
    {
        eliminar(arbol->izquierda, n); // Buscamos por la izquierda.
    }
    else if (n > arbol->dato) // Si el valor es mayor.
    {
        eliminar(arbol->derecha, n); // Buscamos por la derecha.
    }
    else // Si la encontramos es valor.
    {
        eliminarNODO(arbol);
    }
}
Nodo *minimo(Nodo *arbol) // Funcion para determinar el nodo mas izquierda posible.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        return NULL; // Retorna nada.
    }
    if (arbol->izquierda) // Si tiene hijo izquierdo.
    {
        return minimo(arbol->izquierda); // Buscamos la parte mas izquierda posible.
    }
    else // Si no tiene hijo izquierdo.
    {
        return arbol; // Retornamos el mismo nodo.
    }
}
void remplazar(Nodo *arbol, Nodo *nuevoNodo) // Funcion para remplazar dos nodod.
{
    if (arbol->padre) // arbol->padre hay que asignarle su nuevo hijo.
    {
        if (arbol->dato == arbol->padre->izquierda->dato)
        {
            arbol->padre->izquierda = nuevoNodo;
        }
        else if (arbol->dato == arbol->padre->derecha->dato)
            ;
        {
            arbol->padre->derecha = nuevoNodo;
        }
    }
    if (nuevoNodo) // Procedemos a asignarle su nuevo padre.
    {
        nuevoNodo->padre = arbol->padre;
    }
}
void destruirNodo(Nodo *nodo) // Funcion para destruir un nodo.
{
    nodo->izquierda = NULL;
    nodo->derecha = NULL;
    delete nodo;
}
void eliminarNODO(Nodo *nodoEliminar) // Funcion para eliminar el nodo encontrado.
{
    if (nodoEliminar->izquierda && nodoEliminar->derecha) // Si el nodo tiene hijo izquierda y derecha.
    {
        Nodo *menor = minimo(nodoEliminar->derecha);
        nodoEliminar->dato = menor->dato;
        eliminarNODO(menor);
    }
    else if (nodoEliminar->izquierda) // Si tiene un hijo izquierda.
    {
        remplazar(nodoEliminar, nodoEliminar->izquierda);
        destruirNodo(nodoEliminar);
    }
    else if (nodoEliminar->derecha) // Si tiene un hijo derecha.
    {
        remplazar(nodoEliminar, nodoEliminar->derecha);
        destruirNodo(nodoEliminar);
    }
    else // El nodo no tiene hijos.
    {
        remplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}