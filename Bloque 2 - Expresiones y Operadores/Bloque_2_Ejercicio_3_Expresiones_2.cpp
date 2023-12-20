//3. Escribe l siduinete expresion como expresion en C. Expresion (a+(b/c))/(d+(e/f))

#include <stdio.h>

int main(){

    float a = 10;
    float b = 2;
    float c = 5;
    float d = 6;
    float e = 7;
    float f = 8;
    float resultado;


    resultado = (a+(b/c))/(d+(e/f));
    

    printf("El resultado es : %f", resultado);

    return 0;
}
