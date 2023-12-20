/* 1. Hacer una estructura llamada corredor, en la cual se tendran las siguientes campos:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asi una categoria de competicion:

- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años

posteriormente imprimir todos los datos del corredor, incluido su categoria de competicion */

#include <stdio.h>
#include <string.h>

struct corredor
{
    int edad;
    char nombre[20];
    char sexo[20];
    char club[20];
} corredor1;

int main()
{
    char categorias[20];

    printf("\nIngresa tu nombre: ");
    gets(corredor1.nombre);
    printf("\nIngresa tu edad: ");
    scanf("%d", &corredor1.edad);
    fflush(stdin); // Limpiar el buffer.
    printf("\nIngresa tu sexo: ");
    gets(corredor1.sexo);
    printf("\nIngresa tu club: ");
    gets(corredor1.club);

    if (corredor1.edad <= 18)
    {
        strcpy(categorias, "Juvenil");
    }
    else if (corredor1.edad <= 40)
    {
        strcpy(categorias, "Senior");
    }
    else
    {
        strcpy(categorias, "Veterano");
    }

    printf("'\nDatos del corredor\n");

    printf("\nNombre del corredor: %s", corredor1.nombre);
    printf("\nEdad del corredor: %d", corredor1.edad);
    printf("\nSexo del corredor: %s", corredor1.sexo);
    printf("\nClub del corredor: %s", corredor1.club);

    printf("\nCategoria: %s", categorias);

    return 0;
}
