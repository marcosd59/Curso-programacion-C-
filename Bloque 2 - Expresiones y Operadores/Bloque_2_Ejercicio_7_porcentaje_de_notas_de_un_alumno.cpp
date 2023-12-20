/*17. La calificación final de un estudiante es la media ponderada de 
tres notas: La note de prácticas que cuenta un 30% del total, 
la nota teórico que cuenta un 60% y la nota de participación 
que cuenta el 10% restante. 
Escriba un programa que Lea de la entrada estándar Las tres 
notas de un alumno y escriba en La salido estándar su nota final.*/

#include <stdio.h>

int main(){

    float practica = 15;
    float teorica = 18;
    float participacion = 12;
    float nota_final = 0;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    nota_final = practica + teorica + participacion;

    printf("La nota final es: %f",nota_final);


    return 0;
}