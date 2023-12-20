/* 3. Escribe un programa que lea de la entrada estandar un vector
 de numeros y muestre en la salida estandar los numeros del vector con sus indices asociados */

#include <stdio.h>

int main()
{

    int numero [10];
    int n;

    printf("Digite el numero de elementos del arreglo: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: ");
        scanf("%d",&numero[i]);
    }

    //Mostrar los elemtos con sus indices asociados

    for (int i = n-1; i>= 0; i--)
    {
        printf("%d -> %d\n",i,numero[i]);
    }

    return 0;
}