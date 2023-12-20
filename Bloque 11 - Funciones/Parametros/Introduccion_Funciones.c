// Ejemplo encontrar el mayor de 2 numeros

#include <stdio.h>

// Zona de prototipos.

int encontrarMAX(int x, int y);

int main()
{
    int n1, n2;
    int mayor;

    printf("\ningrese un numero: ");
    scanf("%d", &n1);
    printf("\ningrese otro numero: ");
    scanf("%d", &n2);
    
    mayor = encontrarMAX(n1, n2);

    printf("\nEl mayor de los dos numeros es: %d", mayor);

    return 0;
}

// Definicion de funcion.

int encontrarMAX(int x, int y)
{
    int numMAX;

    if (x > y)
    {
        numMAX = x;
    }
    else
    {
        numMAX = y;
    }
    return numMAX;
}