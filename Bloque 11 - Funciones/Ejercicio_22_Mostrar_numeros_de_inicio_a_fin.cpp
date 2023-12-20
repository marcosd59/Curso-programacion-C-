/* 22. Escriba una función escribeNumeros(int ini, int fin) que devuelva en la salida estándar los números del ini al fin.
Escriba una versión que escriba los números en orden ascendente.
		escribeNumeros(ini,fin) = ini                       , si ini=fin
							escribeNumeros(ini,fin-1)       , si fin>ini
*/
#include <stdio.h>

// Prototipo de Funcion
int escribeNumeros(int, int);

int main()
{
	int ini, fin;

	// Pedimos los datos al usuario
	printf("\nEscriba el inicio: ");
	scanf("%d", &ini);
	printf("Escriba el fin: ");
	scanf("%d", &fin);

	// Llamamos a la funcion de forma iterativa para mostrar todos los elementos
	for (int i = ini; i <= fin; i++)
	{
		printf("%d ", escribeNumeros(i, fin));
	}
	return 0;
}

int escribeNumeros(int ini, int fin)
{
	if (ini == fin) // Caso base.
	{
		return ini;
	}
	
	else // Caso general.
	{
		return escribeNumeros(ini, fin - 1);
	}
}
