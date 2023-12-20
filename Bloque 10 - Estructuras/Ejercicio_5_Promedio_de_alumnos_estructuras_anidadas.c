/* 5. Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
nota1, nota2, nota3; y otro llamado alumno que tendra los siguientes campos:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, 
luego pedir todos los datos para un alumno, luego calcular su promedio, y por ultimo imprimir 
todos sus datos incluidos el promedio */

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
}alumno1;

int main()
{
     
    float promedio_alumno;
    int numero = 0, calificacion_mayor, mayor = 0;

    printf("\n***Bienvenido a SIGMAA***\n");

    printf("\nIngrese su nombre: ");
    scanf("%s",&alumno1.nombre);
    printf("\nIngrese su sexo: ");
    scanf("%s",&alumno1.sexo);
    printf("\nIngrese su edad: ");
    scanf("%d",&alumno1.edad);

    printf("\n---> Notas del alumno <---\n");
    printf("\nIngrese tu primer nota: ");
    scanf("%f",&alumno1.prom.nota1);
    printf("\nIngrese tu segunda nota: ");
    scanf("%f",&alumno1.prom.nota2);
    printf("\nIngrese tu tercer nota: ");
    scanf("%f",&alumno1.prom.nota3);

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;
    
    printf("\n---> Datos del alumno <---\n");

    printf("\nNombre: %s", alumno1.nombre);
    printf("\nEdad: %d", alumno1.edad);
    printf("\nSexo: %s", alumno1.sexo );
    printf("\nPromedio: %.2f", promedio_alumno);

    printf("\n");

    return 0;
}