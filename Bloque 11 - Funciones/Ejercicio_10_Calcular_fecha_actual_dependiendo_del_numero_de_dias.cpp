/*Ejercicio 10: Escriba una funcion nombrada calc_anios() que tenga un parametro entero que represente el numero total de dias desde la fecha 1/1/2000 y parametros de referencia nombrados anio, mes y dia. La funcion es calcular el año, mes y dia actual para el numero dado de dias que se le transmitan. Usando las referencias, la funcion debera alterar en forma directa los argumentos respectivos en la funcion que llama. Para este problema suponga que cada anio tiene 365 dias y cada mes tiene 30 dias.*/

#include <stdio.h>

void calc_anios(int, int &, int &, int &);

int main()
{
	int totalDias, anio, mes, dia;

	printf("\nDigite el numero total de dias transcurridos: ");
	scanf("%d", &totalDias);

	calc_anios(totalDias, anio, mes, dia);

	printf("\nFecha Actual: %d/%d/%d\n", dia + 1, mes + 1, anio + 2000);

	return 0;
}

void calc_anios(int totalDias, int &anio, int &mes, int &dia)
{
	anio = totalDias / 365;
	totalDias %= 365;
	mes = totalDias / 30;
	dia = totalDias % 30;
}