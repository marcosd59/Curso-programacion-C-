// Paso de parametros de tipo estructura

#include <stdio.h>

struct persona
{
    char nombre[30];
    int edad;
} p1;

// Zona de prototipos.

void pedirDATOS();
void mostrarDATOS(persona);

int main()
{
    pedirDATOS();
    mostrarDATOS(p1);

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite su nombre: ");
    gets(p1.nombre);
    printf("Digite su edad: ");
    scanf("%d", &p1.edad);
}

void mostrarDATOS(persona p)
{
    printf("\nNombre: %s", p.nombre);
    printf("\nEdad: %d", p.edad);
    printf("\n");
}