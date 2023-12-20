/* 4.Hacer un arreglo de estrctura llamada atleta para N atletas que contenga los siguientes campos:
nombre, pais, numero_de_medallas y devuelva los datos (nombre y pais) del atleta que
ha ganado el mayor numero de medallas. */

#include <stdio.h>

struct atleta
{
    char nombre[20];
    char pais[20];
    int medallas_ganadas;
} atletas[100];

int main()
{
    int numero = 0, medalla_mayor, mayor = 0;

    printf("\nIngrese el numero de atletas: ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++)
    {
        fflush(stdin); // Vaciar el buffer y permitir digitar los valores.
        printf("\n%d. Ingrese su nombre: ", i + 1);
        scanf("%s", &atletas[i].nombre);
        printf("\nIngrese su pais: ");
        scanf("%s", &atletas[i].pais);
        printf("\nIngrese sus numero de medallas: ");
        scanf("%d", &atletas[i].medallas_ganadas);

        if (atletas[i].medallas_ganadas > mayor)
        {
            mayor = atletas[i].medallas_ganadas;
            medalla_mayor = i;
        }

        printf("\n");
    }

    printf("\nDatos del atleta con mayores medallas es: \n");
    printf("\nNombre: %s", atletas[medalla_mayor].nombre);
    printf("\nPais: %s", atletas[medalla_mayor].pais);
    printf("\nTotal de medallas: %d", atletas[medalla_mayor].medallas_ganadas);

    printf("\n");

    return 0;
}
