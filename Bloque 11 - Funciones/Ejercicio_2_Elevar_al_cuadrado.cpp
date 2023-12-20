/* 2. Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que
se le transmite y despliegue el resultado. La funcion debera ser capaz de elevar al cuadrado
numeros flotantes. */

#include <stdio.h>
#include <math.h>

// Prototipo de funcion.
void al_cuadrado(float numero);

int main()
{
    float numero = 2.5;
    al_cuadrado(numero);
    return 0;
}

void al_cuadrado(float numero)
{
    printf("\n%.2f al cuadrado es: %.2f\n", numero, pow(numero, 2));
}