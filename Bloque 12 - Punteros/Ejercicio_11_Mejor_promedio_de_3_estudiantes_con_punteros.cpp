/* 11. Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos: Nombre, edad, promedio. Pedir datos al usuario para 3 alumnos, comparar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
Nota: usar punteros a estructura. */

#include <stdio.h>

struct Alumno
{
    char nombre[20];
    int edad;
    float promedio;
} alumno[3], *puntero_alumno = alumno; // Es igual a &alumno[0];

void pedirDATOS();
void calcularMEJOR_PROMEDIO(Alumno *);

int main()
{
    printf("\n---> Mejor promedio de 3 alumnos <---\n");
    pedirDATOS();
    calcularMEJOR_PROMEDIO(puntero_alumno);

    return 0;
}

void pedirDATOS()
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("\nDigite su nombre: ");
        gets((puntero_alumno + i)->nombre);
        printf("Digite su edad: ");
        scanf("%d", &(puntero_alumno + i)->edad);
        printf("Digite su promedio: ");
        scanf("%f", &(puntero_alumno + i)->promedio);
        printf("\n");
    }
}

void calcularMEJOR_PROMEDIO(Alumno *puntero_alumno)
{
    float mayor = 0.0;
    int pos = 0;

    for (int i = 0; i < 3; i++)
    {
        if ((puntero_alumno + i)->promedio > mayor)
        {
            mayor = (puntero_alumno + i)->promedio; // Comprobar el mayor arreglo.
            pos = i;
        }
    }

    // Imprimir los datos del alumno con mayor promedio
    
    printf("\nEl alumno con mejor promedio es: \n");
    printf("\nNombre: %s", (puntero_alumno + pos)->nombre);
    printf("\nEdad: %d", (puntero_alumno + pos)->edad);
    printf("\nPromedio: %.2f", (puntero_alumno + pos)->promedio);
}