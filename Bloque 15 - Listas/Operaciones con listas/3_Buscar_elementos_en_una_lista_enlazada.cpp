//Buscar elementos en una lista enlazada.

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void menu();
void insertarLISTA(Nodo *&, int);
void mostrarLISTA(Nodo *);
void buscarLISTA(Nodo *&, int);

Nodo *lista = NULL;

int main()
{
    menu();
    return 0;
}
void menu()
{
    int opc;
    int dato = 0;

	do
    {
		printf("\t---> MENU <---\n");
		printf("1. Insertar un numero a la lista\n");
		printf("2. Mostrar todos los elementos de la lista\n");
		printf("3. Buscar un elementos de la lista\n");
        printf("4. Salir\n");
		printf("Opcion: ");
		scanf("%d",&opc);

		switch(opc)
        {
			case 1: printf("\nDigite un numero: ");
                    scanf("%d",&dato);
                    insertarLISTA(lista,dato);
                    break;
			case 2: mostrarLISTA(lista);
					printf("\n");
					system("pause");
					break;
            case 3: printf("\nDigite un numero a buscar: ");
                    scanf("%d",&dato);
                    buscarLISTA(lista,dato);
                    printf("\n");
                    system("pause");
                    break;
			case 4: printf("\nSaliendo..."); break;
		}
		system("cls");
	} while(opc != 4);
}
void insertarLISTA(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); //1. Crear un nuevo nodo.
    nuevo_nodo->dato = n; //2. Asignar a nuevo_nodo->dato el elemento que queremos incluir a la lista.
    Nodo *aux1 = lista; //3. Crear dos nodos auxiliares y asignar lista al primero de ellos.
    Nodo *aux2;

    while ((aux1 != NULL)&&(aux1->dato < n)) //4. Insertar el elemento en la lista.
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
        aux2->siguiente =nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    printf("\nElemento %d insertado a lista correctamente.\n",n);
}
void mostrarLISTA(Nodo *lista)
{
    Nodo *actual = new Nodo (); //1. Crar un nuevo nodo(actual).
    actual = lista; //2. Igualar ese nuevo nodo(actual) a lista.

    while (actual != NULL) //3. Recorrer la lista de inicio a fin.
    {
        printf("%d -> ",actual->dato);
        actual = actual->siguiente;
    }
}
void buscarLISTA(Nodo *&lista, int n)
{
    bool band = false;

    Nodo *actual = new Nodo (); //1. Crear un nodo (actual).
    actual = lista; //2. Igualar ese nuevo nodo (actual) a la lista.

    while ((actual != NULL) && (actual->dato <= n)) //3. Recorrer la lista.
    {
        if (actual->dato == n) //4. Determinar si el elemento existe o no en la lista.
        {
            band = true;
        }
        actual = actual->siguiente;
    }

    if (band == true)
    {
        printf("\nEl elemento '%d' ha sido encontrado dentro de la lista :)\n",n);
    }
    else
    {
        printf("\nEl elemento '%d' no ha sido encontrado dentro de la lista :(\n",n);
    }
}