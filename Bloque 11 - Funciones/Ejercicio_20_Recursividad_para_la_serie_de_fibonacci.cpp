/* 20. Realice una funcion recursiva para la serie fibonacci. Nota: La serie fibonacci esta formada por la secuencia de numeros:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34...

	fibonacci(n) = n                              , si n < 2
				   fibonacci(n-1)+fibonacci(n-2)  , si n >= 2

*/

#include <stdio.h>

int fibonacci(int n);

int main()
{
	int nElementos;

	// Pedimos un numero entero positivo.

	do
	{
		printf("Digite el numero de elementos: ");
		scanf("%d", &nElementos);
	} while (nElementos <= 0);

	// Mandamos llamar a la funcion pero de forma iterativa para imprimir todos los elementos.

	printf("\nSerie Fibonacci: ");

	for (int i = 0; i < nElementos; i++)
	{
		printf("%d ", fibonacci(i));
	}
	return 0;
}

int fibonacci(int n)
{
	if (n < 2) // Caso base.
	{
		return n;
	}
	
	else // Caso general
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
