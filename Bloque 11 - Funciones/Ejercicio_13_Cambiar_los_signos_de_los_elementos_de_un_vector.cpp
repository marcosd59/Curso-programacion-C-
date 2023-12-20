/* 13. Realizar una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector. */

#include <stdio.h>

void pedirDATOS();
void cambiarSIGNOS(int vec[], int);
void mostrarVECTOR(int vec[], int tam);

int vec[100], tam;

int main()
{
    pedirDATOS();
    cambiarSIGNOS(vec, tam);
    mostrarVECTOR(vec, tam);

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite le numero de elemntos del vector: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        printf("[%d]. Digite un numero: ", i + 1);
        scanf("%d", &vec[i]);
    }
}

void cambiarSIGNOS(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = vec[i] * -1;
    }
}

void mostrarVECTOR(int vec[], int tam)
{
    printf("\nMostrando los elementos del vector con signo cambiado: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}