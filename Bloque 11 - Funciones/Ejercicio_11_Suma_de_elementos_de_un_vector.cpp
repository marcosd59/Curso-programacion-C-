/* 11. Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos. */

#include <stdio.h>

void pedirDATOS();
int calcularSUMA(int vec[], int);

int vec[100], tam;

int main()
{
    pedirDATOS();

    printf("\nLa suma de los elementos del vector es: %d", calcularSUMA(vec, tam));

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite el numero de elementos del vector: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        printf("\n[%d]. Digite un numero: ", i + 1);
        scanf("%d", &vec[i]);
    }
}

int calcularSUMA(int vec[], int tam)
{
    int suma = 0;

    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }
    
    return suma;
}