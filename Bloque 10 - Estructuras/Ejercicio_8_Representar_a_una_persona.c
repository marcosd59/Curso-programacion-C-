/* 8. Defina una estructura que sirva para representar a una persona.
La estrutura debe contener dos campos: el  nombre de la persona y un valor de tipo logico que indica
si la persona tiene algun tipo de descapacidad. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna discapacidad
y otro que contenga las personas con discapacidad. */

#include <stdio.h>
#include <string.h>

struct Persona_discapacidad
{
	char nombre[30];
	int discapacidad;
}personas[30],personasConD[30],personasSinD[30];

//personasConD = Persona con Discapacidad
//personasSinD = Persona sin Discapacidad

int main()
{

	int n_personas,j = 0, k = 0;
	
	printf("\nDigite el numero de personas: ");
	scanf("%d",&n_personas);
	
	//Rellenar el arreglo de estructuras
	
	for(int i = 0; i < n_personas; i++)
	{
		fflush(stdin);
		printf("\nNombre : ");
        gets(personas[i].nombre);
		printf("\nDiscapacidad (1/0)? :");
        scanf("%d",&personas[i].discapacidad);
		
		//Almacenamos las personas con discapacidad

		if(personas[i].discapacidad == 1)
		{
			strcpy(personasConD[j].nombre,personas[i].nombre);
			j++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		
		//Almacenamos las personas sin Discapacidad
		
		else
		{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		printf("\n");
	}
	
	//Mostrar las personas con Discapaciadad
	printf("\nPersonas con Discapacidad\n");
	for(int i = 0; i < n_personas; i++)
	{
		printf("\n%s\n",personasConD[i].nombre);
	}
	
	//Mostrar las personas sin Discapacidad
	
	printf("\nPersonas sin Discapacidad\n");
	for(int i = 0; i < n_personas; i++)
	{
		printf("\n %s\n",personasSinD[i].nombre);
	}
    return 0;
}