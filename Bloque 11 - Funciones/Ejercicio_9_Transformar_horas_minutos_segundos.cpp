/* 9. Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalseg y tres parametros de referenicia enteros nombrados horas, minutos y segundos. 

La funcion es convertir el numero de segundos transmitido en un numero equivalente de horas, minutos y segundos. */

#include <stdio.h>

void tiempo(int, int &, int &, int &);

int main()
{
    int totalSEG, horas, minutos, segundos;

    printf("\nDigite el total de segundos: ");
    scanf("%d", &totalSEG);

    tiempo(totalSEG, horas, minutos, segundos);

    printf("\nTiempo equivalente a la cantidad de segundos digitados: \n");
    printf("\n%d horas", horas);
    printf("\n%d minutos", minutos);
    printf("\n%d Segundos\n", segundos);

    return 0;
}

void tiempo(int totalSEG, int &horas, int &minutos, int &segundos)
{
    horas = totalSEG / 3600;
    totalSEG = totalSEG % 3600;
    minutos = totalSEG / 60;
    segundos = totalSEG % 60;
}