/* 2. Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
Nombre, edad, promedio. Pedir datos al usuario para tres alumnos, comprobar cual tiene el mejor promedio y
posteriromente imprimir los datos del alumno. */

#include <string.h>
#include <stdio.h>

struct alumno
{
    char nombre[10];
    int edad;
    float promedio;
} alumnos[3];

int main()
{
    printf("\nBienvenido a SIGMAA\n");

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin); // Vaciar el buffer y permitir digitar los valores.
        printf("\nIngrese su nombre: ");
        gets(alumnos[i].nombre);
        printf("\nIngresa su edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("\nIngresa tu promedio: ");
        scanf("%f", &alumnos[i].promedio);
        printf("\n");
    }

    if (alumnos[0].promedio > alumnos[1].promedio)
    {
        if (alumnos[0].promedio > alumnos[2].promedio)
        {
            printf("\nFELICIDADES %s!! TU PROMEDIO ES EL MAS ALTO\n", alumnos[0].nombre);
            printf("\nNombre: %s", alumnos[0].nombre);
            printf("\nEdad: %d ", alumnos[0].edad);
            printf("\nPromedio: %.2f ", alumnos[0].promedio);
        }
    }
    else if (alumnos[1].promedio > alumnos[2].promedio)
    {
        printf("\nFELICIDADES ALUMNO 2!! TU PROMEDIO ES EL MAS ALTO\n");
        printf("\nNombre: %s", alumnos[1].nombre);
        printf("\nEdad: %d ", alumnos[1].edad);
        printf("\nPromedio: %.2f ", alumnos[1].promedio);
    }
    else
    {
        printf("\nFELICIDADES ALUMNO 3!! TU PROMEDIO ES EL MAS ALTO\n");
        printf("\nNombre: %s", alumnos[2].nombre);
        printf("\nEdad: %d ", alumnos[2].edad);
        printf("\nPromedio: %.2f ", alumnos[2].promedio);
    }

    /*

    for (int i = 0; i < 3; i++)
    {
        valor = alumnos[i].promedio;
        if (valor > max)
        {
            max = valor;
            cont = i;
        }
    }

    printf("\n\nEL ALUMNO CON MAYOR NOTA ES: ");
    printf("\nNombre: %s",alumnos[cont].nombre);
    printf("\nEdad: %d ",alumnos[cont].edad);
    printf("\nPromedio: %f ",alumnos[cont].promedio);

    */

    return 0;
}
