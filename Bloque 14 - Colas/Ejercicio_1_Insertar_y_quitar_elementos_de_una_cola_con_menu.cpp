/* 1. Hacer un programa en C, utilizando colas que contenga el siguiente menu:

	1. Insertar un caracter a una cola.
	2. Mostrar todos los elementos de la cola.
	3. Salir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Nodo
{
	char dato;
	Nodo *siguiente;
};

// Prototipos de Funciones.

void menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, char &);

int main()
{
	menu();
	return 0;
}

void menu()
{
	int opc;
	char dato;

	Nodo *frente = NULL;
	Nodo *fin = NULL;

	do
	{
		printf("\t.:MENU:.\n");
		printf("1. Insertar un caracter a una cola\n");
		printf("2. Mostrar todos los elementos de la cola\n");
		printf("3. Salir\n");
		printf("Opcion: ");
		scanf("%d", &opc);

		switch (opc)
		{
		case 1:
			printf("\nIngrese el caracter para agregar a la cola: ");
			scanf("%s", &dato);
			insertarCola(frente, fin, dato);
			break;
		case 2:
			printf("\nMostrando los elementos de la cola: ");
			while (frente != NULL)
			{
				suprimirCola(frente, fin, dato);
				if (frente != NULL)
				{
					cout << dato << ",";
				}
				else
				{
					cout << dato << ".";
				}
			}
			printf("\n");
			system("pause");
			break;
		case 3:
			printf("\nSaliendo...");
			break;
		}
		system("cls");
	} while (opc != 3);
}

void insertarCola(Nodo *&frente, Nodo *&fin, char n) // Funcion para insertar elementos en la cola.
{
	Nodo *nuevo_nodo = new Nodo(); // 1. Crear espacio en memoria para almacenar un nodo.
	nuevo_nodo->dato = n;		   // 2. Asignar ese nuevo nodo al dato que queremos insertar.
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
}

bool cola_vacia(Nodo *frente) // Funcion para determinar si la cola esta vacia.
{
	return (frente == NULL) ? true : false;
}

void suprimirCola(Nodo *&frente, Nodo *&fin, char &n) // Funcion para eliminar elementos de la cola.
{
	n = frente->dato;	// 1. Obtener el valor del nodo.
	Nodo *aux = frente; // 2. Crear un nodo aux y asignarle el frente a la cola.

	if (frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;
	}
	delete aux; // 3. Eliminar el nodo del frente de la cola.
}
