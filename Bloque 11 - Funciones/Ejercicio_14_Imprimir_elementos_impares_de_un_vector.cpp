/* 14. Realiza una funcion que tome como parametros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido. */

#include <stdio.h>

void pedirDATOS();
void numerosIMPARES(int vec[], int);

int vec[100], tam;

int main()
{
    pedirDATOS();
    numerosIMPARES(vec, tam);

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite le numero de elemntos del vector: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        printf("\n[%d]. Digite un numero: ", i + 1);
        scanf("%d", &vec[i]);
    }
}

void numerosIMPARES(int vec[], int tam)
{
    int impar[100], j = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vec[i] % 2 != 0)
        {
            impar[j] = vec[i];
            j++;
        }
    }

    printf("\nMostrando los elementos impares: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", impar[i]);
    }
    printf("\n");
}