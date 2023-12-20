/* 5. Desarrolle un programa que lea de la entrada estandar un vector
de enteros y determine el mayor elemto del vector.*/

#include <stdio.h>

int main()
{

    int numero[10];
    int n, mayor = 0;

    printf("Digite el numero de elementos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d. Digite un numero: ", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] > mayor)
        {
            mayor = numero[i];
        }
    }

    printf("El mayor es: %d", mayor);

    return 0;
}