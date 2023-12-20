/* 6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N
alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos. */

#include <stdio.h>
#include <string.h>

struct promedio
{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio prom;
} alumnos[100];

int main()
{

    float promedio_alumno[100];
    int numero = 0, calificacion_mayor, mayor = 0;

    printf("\nIngrese el numero de alumnos: ");
    scanf("%d", &numero);

    printf("\nBIENVENIDOS A SIGMAA\n");

    for (int i = 0; i < numero; i++)
    {
        fflush(stdin);

        printf("\nDATOS DEL ALUMNO: %d\n",i+1);

        printf("\nIngrese su nombre: ");
        scanf("%s", &alumnos[i].nombre);
        printf("Ingrese su sexo: ");
        scanf("%s", &alumnos[i].sexo);
        printf("Ingrese su edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("\n-----> Notas del alumno %d<-----\n",i+1);
        printf("\nIngrese tu primer nota: ");
        scanf("%f", &alumnos[i].prom.nota1);
        printf("Ingrese tu segunda nota: ");
        scanf("%f", &alumnos[i].prom.nota2);
        printf("Ingrese tu tercer nota: ");
        scanf("%f", &alumnos[i].prom.nota3);

        promedio_alumno[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

        if (promedio_alumno[i] > mayor)
        {
            mayor = promedio_alumno[i];
            calificacion_mayor = i;
        }
        printf("\n");
    }

    printf("\n \t.:Datos del alumno con mejor promedio:.\n");

    printf("\nNombre: %s", alumnos[calificacion_mayor].nombre);
    printf("\nEdad: %d", alumnos[calificacion_mayor].edad);
    printf("\nSexo: %s", alumnos[calificacion_mayor].sexo);
    printf("\nPromedio: %.2f", promedio_alumno[calificacion_mayor]);

    printf("\n");

    return 0;
}