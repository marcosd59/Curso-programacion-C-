/* 7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa.
La estrutura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas. */

#include <stdio.h>

struct tiempo
{
    int horas;
    int minutos;
    int segundos;
}etapa[100];

int main()
{
    int numero, horasT = 0, minutosT = 0, segundosT = 0;

    printf("\nIngrese el numero de etapas: ");
    scanf("%d",&numero);
    printf("\n");

    for (int i = 0; i < numero; i++)
    {
        fflush(stdin);
        printf("Etapa [%d] - Horas: ",i+1);
        scanf("%d", &etapa[i].horas);
        printf("Etapa [%d] - Minutos: ",i+1);
        scanf("%d", &etapa[i].minutos);
        printf("Etapa [%d] - Segundos: ",i+1);
        scanf("%d", &etapa[i].segundos);
        printf("\n");

        horasT = horasT + etapa[i].horas;
        minutosT = minutosT + etapa[i].minutos;

        if (minutosT >= 60)
        {
            minutosT = minutosT - 60;
            horasT++;
        }
        
        segundosT = segundosT + etapa[i].segundos;

        if (segundosT >= 60)
        {
            segundosT = segundosT - 60;
            minutosT++;
        }    
    }
    
    printf("\n--------> TIEMPO TOTAL <--------\n");

    printf("\nHoras Totales: %d hrs", horasT);
    printf("\nMinutos Totales:  %d min", minutosT);
    printf("\nSegundos Totales: %d seg", segundosT );
    printf("\n");

    return 0;
}