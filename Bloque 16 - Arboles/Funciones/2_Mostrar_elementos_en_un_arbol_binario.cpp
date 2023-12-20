// Mostrar elementos de un arbol binario.

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *derecha;
    Nodo *izquierda;
};
// Prototipos
void menu();
Nodo *crearNodo(int);
void insertarNODO(Nodo *&, int);
void MostrarARBOL(Nodo *, int);

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
        printf("3. Salir.\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\nDigite un numero: ");
            scanf("%d", &dato);
            insertarNODO(arbol, dato);
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
            printf("\nSaliendo...");
            break;
        default:
            printf("\nOpcion innvalida :\\");
            break;
        }
        system("cls");
    } while (opcion != 3);
}
Nodo *crearNodo(int n) // Funcion para crear un nuevo nodo.
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->derecha = NULL;
    nuevo_nodo->izquierda = NULL;
    return nuevo_nodo;
}
void insertarNODO(Nodo *arbol, int n) // Funcion para insertar elementos en el arbol.
{
    if (arbol == NULL) // Si el arbol esta vacio.
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else // Si el arbol tiene un nodo o mas.
    {
        int valorRAIZ = arbol->dato; // obtenemos el valor de la raiz.
        if (n < valorRAIZ)           // Si el elemento es menor a la raiz, insertamos a la izquierda.
        {
            insertarNODO(arbol->izquierda, n);
        }
        else // Si el elemento es mayor a la raiz, insertamos a la derecha.
        {
            insertarNODO(arbol->derecha, n);
        }
    }
}
void MostrarARBOL(Nodo *&arbol, int cont)
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