/*Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por ultimo muestre los clientes en el orden correcto.*/

#include <stdio.h>
#include <stdlib.h>

struct Cliente
{
	char nombre[30];
	char clave[10];
	int edad;
};

struct Nodo
{
	Cliente c;
	Nodo *siguiente;
};

void cargar_cliente(Cliente &);
void insertarCola(Nodo *&, Nodo *&, Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, Cliente &);

int main()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char rpt;

	do
	{
		cargar_cliente(c);			  // Cargamos cliente.
		insertarCola(frente, fin, c); // y luego lo agregamos a cola.

		printf("Desea agregar mas clientes(s/n): ");
		scanf("%s", &rpt);
		printf("\n");
	} while (rpt == 'S' || rpt == 's');

	printf("\n=== Carga de Clientes Exitosa ===\n\n");

	printf("Mostrando clientes:\n\n");

	while (frente != NULL) // Vaciando la cola.
	{
		suprimirCola(frente, fin, c);
		// Mostrando todos los clientes agregados.
		printf("Nombre: %s\n", c.nombre);
		printf("Clave: %s\n", c.clave);
		printf("Edad: %d\n", c.edad);
		printf("\n");
	}
	return 0;
}

void cargar_cliente(Cliente &c)
{
	fflush(stdin);
	printf("\nAgregar un nuevo cliente\n");
	printf("Nombre: ");
	gets(c.nombre);
	printf("Clave: ");
	gets(c.clave);
	printf("Edad: ");
	scanf("%d", &c.edad);
	printf("\n");
}

void insertarCola(Nodo *&frente, Nodo *&fin, Cliente c)
{
	Nodo *nuevo_nodo = new Nodo();

	nuevo_nodo->c = c;
	nuevo_nodo->siguiente = NULL;

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
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL) ? true : false;
}
void suprimirCola(Nodo *&frente, Nodo *&fin, Cliente &c)
{
	c = frente->c;
	Nodo *aux = frente;

	if (frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;
	}

	delete aux;
} 