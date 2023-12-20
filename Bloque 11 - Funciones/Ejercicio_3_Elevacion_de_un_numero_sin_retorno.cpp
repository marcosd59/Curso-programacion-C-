/* 3. Escriba una funcion nombrada funpot() que eleve un numero entero que se le
transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero entero positivo debera ser el segundo valor transmitido a la funcion */

#include <stdio.h>

// Prototipos de la funcion.
void pedirDATOS();
void funpot(int x, int y);

int numero, exponente;

int main()
{
    pedirDATOS();
    funpot(numero, exponente);

    return 0;
}

void pedirDATOS()
{
    printf("\nIngrese un numero: ");
    scanf("%d", &numero);
    printf("\nIngrese el exponente: ");
    scanf("%d", &exponente);
}

void funpot(int x, int y)
{
    long resultado = 1;

    for (int i = 1; i <= y; i++)
    {
        resultado = resultado * x;
    }

    printf("\nEl resultado de %d^%d es: %ld\n", x, y, resultado);
}