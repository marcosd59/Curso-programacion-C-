/* 6. Escribe un programa que defina un vector de numeros y calcule si existe
algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector */

#include <stdio.h>

int main()
{
	int numeros[5] = {11,2,3,4,2}; //Definimos un arreglo
	int suma = 0, mayor = 0;

	for(int i = 0;i < 5; i++)
    {
		suma += numeros[i];

		if(numeros[i] > mayor)  //Determinamos cual es el numero mayor, ya que
        {
			mayor = numeros[i]; //El unico numero que puede ser la suma de los
		}					    //demas es el numero mayor
	}

	if (mayor == suma-mayor) //comparamos si el numero mayor es igual a suma menos el numero mayor
    {
		printf("El numero %d es la suma de los demas", mayor);
	}
	else
    {
		printf("No existe ningun numero que sea la suma de los demas");
	}

	return 0;
}
