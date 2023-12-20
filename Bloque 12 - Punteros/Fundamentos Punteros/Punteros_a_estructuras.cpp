// Punteros a estructuras

#include <stdio.h>

struct persona
{
    char nombre[20];
    int edad;
} persona1, *puntero_persona1 = &persona1;

void pedirDATOS();
void mostrarDATOS(persona *);

int main()
{
    pedirDATOS();
    mostrarDATOS(puntero_persona1);

    return 0;
}

void pedirDATOS()
{
    printf("\nIngresa tu nombre: ");
    gets(puntero_persona1->nombre);
    printf("\nIngresa tu edad: ");
    scanf("%d", &puntero_persona1->edad);
}

void mostrarDATOS(persona *puntero_persona1)
{
    printf("\nSu nombre es: %s", puntero_persona1->nombre);
    printf("\nSu edad es: %d", puntero_persona1->edad);
}