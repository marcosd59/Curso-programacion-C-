/* Ejercicio 1: Escriba una funcion llamada mult() que acepete dos numeros en punto flotante como parametros,
multiplique estos dos nuemros y despliegue el resultado. */

#include <stdio.h>

// Prototipo de funcion.

void pedirDATOS();
void mult(float x, float y);

float num1, num2;

int main()
{
    pedirDATOS();
    mult(num1, num2);
    return 0;
}

void pedirDATOS()
{
    printf("\nDigite el primer numero: ");
    scanf("%f", &num1);
    printf("\nDigite el sugundo numero:");
    scanf("%f", &num2);
}

void mult(float x, float y)
{
    float multiplicacion = x * y;

    printf("\nLa multiplicacion es: %.2f", multiplicacion);
}
