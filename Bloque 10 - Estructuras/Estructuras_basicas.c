//Estructura basica en C

#include <stdio.h>

struct persona
{
    char nombre[20];
    int edad;
}
persona1 = {"Marcos",18},
persona2 = {"Alejandro",20};


int main()
{
    //gets(persona1.nombre); Pedir el nombre al usuario

    printf("\nPersona 1: %s\n",persona1.nombre);
    printf("\nEdad 1: %d\n",persona1.edad);

    printf("\nPersona 2: %s\n",persona2.nombre);
    printf("\nEdad 2: %d\n",persona2.edad);
 
    return 0;
}