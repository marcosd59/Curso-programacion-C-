/*8. Escriba un programa que lea de la estandar los dos catetos de un 
triangulo rectangulo y escriba en la salida estandar su hipotenusa*/

#include <stdio.h>
#include <math.h>


int main(){


    float a = 3;
    float b = 4;
    float c,h;

    c = (pow(a,2)) + (pow(b,2));
    h = sqrt(c);

    printf("La hipotenusa es: %f",h);

    return 0;
}