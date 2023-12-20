/*9. Realice un programa que calcule el valor que toma la siguiente
funcion para unos valores dados de x e y: f(x,y) = ((sqrt(x))/(y^2-1))*/

#include <stdio.h>
#include <math.h>

int main(){

    float x = 64;
    float y = 2;
    float resultado;

    resultado = ((sqrt(x))/(pow(y,2)-1));

    printf("El resultado es: %f",resultado);

    return 0;
}