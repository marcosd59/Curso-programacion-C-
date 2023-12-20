/* 18. Escriba una funcion en C llamada mayor() que devuelva la fecha mas reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se le trasnmiten las fechas 10/09/2005 y 11/03/2015 a mayor(), sera devuelta la segunda fecha. */

#include <stdio.h>

struct Fecha
{
	int dia;
	int mes;
	int anio;
} f1, f2;

// Prototipos de Funciones.

void pedirDatos();
Fecha mayor(Fecha, Fecha);
void mostrarFechaMayor(Fecha);

int main()
{
	pedirDatos();
	Fecha x = mayor(f1, f2);
	mostrarFechaMayor(x);

	return 0;
}

void pedirDatos()
{
	printf("\nDigite la Fecha 1\n\n");
	printf("Dia: ");
	scanf("%d", &f1.dia);
	printf("Mes: ");
	scanf("%d", &f1.mes);
	printf("Anio: ");
	scanf("%d", &f1.anio);

	printf("\nDigite la Fecha 2\n\n");
	printf("Dia: ");
	scanf("%d", &f2.dia);
	printf("Mes: ");
	scanf("%d", &f2.mes);
	printf("Anio: ");
	scanf("%d", &f2.anio);
}

Fecha mayor(Fecha f1, Fecha f2)
{
	Fecha mayorFecha;

	// Primero comprobamos los anios.

	if (f1.anio == f2.anio)
	{
		// Ahora, comprobamos los meses

		if (f1.mes == f2.mes)
		{
			// Por ultimo comprobamos los dias
			
			if (f1.dia == f2.dia)
			{
				printf("\nAmbas fechas son iguales\n");
			}
			else if (f1.dia > f2.dia)
			{
				mayorFecha = f1;
			}
			else
			{
				mayorFecha = f2;
			}
		}
		else if (f1.mes > f2.mes)
		{
			mayorFecha = f1;
		}
		else
		{
			mayorFecha = f2;
		}
	}
	else if (f1.anio > f2.anio)
	{
		mayorFecha = f1;
	}
	else
	{
		mayorFecha = f2;
	}
	return mayorFecha;
}

void mostrarFechaMayor(Fecha x)
{
	printf("\nMostrando fecha mayor: %d/%d/%d\n", x.dia, x.mes, x.anio);
}