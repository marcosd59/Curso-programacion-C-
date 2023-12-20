/* Trasmision de direcciones

Ejemplo: Intercambiar el valor de 2 variables. */

#include <stdio.h>

void intercambio(float *, float *); // Prototipo de la funcion.

int main()
{
    float num1 = 20.8, num2 = 6.78;

    printf("\nPrimer numero: %.2f", num1);
    printf("\nSegundo numero: %.2f\n", num2);

    intercambio(&num1, &num2);

    printf("\n.:DESPUES DEL INTERCAMBIO:.\n");

    printf("\nPrimer numero: %.2f", num1);
    printf("\nSegundo numero: %.2f\n", num2);

    return 0;
}

void intercambio(float *dirnm1, float *dirnm2)
{
    float aux;
    
    aux = *dirnm1;
    *dirnm1 = *dirnm2;
    *dirnm2 = aux;
}