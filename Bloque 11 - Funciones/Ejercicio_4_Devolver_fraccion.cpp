/* 4. Escriba un programa en C que devuelva la parte fraccionaria de cualquier numero
introduccido por el usuario. Por ejmeplo: si se introdujo el numero
256.879, deberia desplegarse el numero 0.879 */

#include <stdio.h>

// Zona de prototipos.

void pedirDATOS();
float fraccion(float n);

float numero;

int main()
{
    pedirDATOS();
    printf("\nLa parte fracionaria del numero es: %.2f", fraccion(numero));
    return 0;
}

void pedirDATOS()
{
    printf("\nIngrese un valor flotante: ");
    scanf("%f", &numero);
}

float fraccion(float n)
{
    // por ejemplo si el numero es 45.567 en entero solo se guardaria 45
    int entero = n;

    // y por ultimo restamos el valor flotante menos el entero para tener la parte fraccionaria
    float resultado = n - entero;

    return resultado;
}