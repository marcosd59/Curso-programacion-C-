/*
Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:

a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/

#include <stdio.h>

int main()
{
    int examen1, examen2, examen3;
    int aprobaron_todos_examenes = 0, aprobaron_almenos_uno = 0, aprobaron_ultimo = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Ingrese la calificacion del examen 1: ");
        scanf("%d", &examen1);
        printf("Ingrese la calificacion del examen 2: ");
        scanf("%d", &examen2);
        printf("Ingrese la calificacion del examen 3: ");
        scanf("%d", &examen3);

        printf("\n");

        // examinando la opcion a
        if ((examen1 > 10.5) && (examen2 > 10.5) && (examen3 > 10.5))
        {
            aprobaron_todos_examenes++;
        }

        // examinando la opcion b
        if ((examen1 > 10.5) || (examen2 > 10.5) || (examen3 > 10.5))
        {
            aprobaron_almenos_uno++;
        }

        // examinando la opcion c
        if ((examen1 < 10.5) && (examen2 < 10.5) && (examen3 > 10.5))
        {
            aprobaron_ultimo++;
        }
    }

    printf("\na) Aprobaron todos los examenes: %d", aprobaron_todos_examenes);
    printf("\nb) Aprobaron almenos un examen: %d", aprobaron_almenos_uno);
    printf("\nc) Aprobaron unicamente el ultimo examen: %d", aprobaron_ultimo);

    return 0;
}