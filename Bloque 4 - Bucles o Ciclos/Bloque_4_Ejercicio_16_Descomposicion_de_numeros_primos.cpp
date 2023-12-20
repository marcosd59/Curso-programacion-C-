/*
16. Realice un programa que calcule la desconposicion en factores primos de un numero entero
EJEMPLO: 20 = 2*2*5
*/

#include <stdio.h>

int main()
{
	int n = 20, factor;

	for (int i = 1; i <= n; i++)

	{
		factor = n / i;

		if (n % i == 0)
		{
			printf("Los factores del numero son: %d\n", factor);
		}
	}

	return 0;
}