/* 10. Escriba un programa que calcule las soluciones d euna ecuacion de segundo
grado de la forma ax^2+bx+c=0*/

#include <stdio.h>
#include <math.h>

int main()
{

    float a = 1;
    float b = 2;
    float c = -8;

    float resultado1, resultado2;

    resultado1 = (pow(b, 2)) - (4 * a * c);
    resultado1 = sqrt(resultado1);
    resultado1 = ((-b - (resultado1)) / (2 * a));

    resultado2 = (pow(b, 2)) - (4 * a * c);
    resultado2 = sqrt(resultado2);
    resultado2 = ((-b + (resultado2)) / (2 * a));

    printf("\nEl resuldo con -b es: %.2f", resultado1);
    printf("\nEl resuldo con +b es: %.2f", resultado2);

    return 0;
}