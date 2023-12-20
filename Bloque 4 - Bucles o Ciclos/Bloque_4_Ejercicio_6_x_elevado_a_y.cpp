/* 6. Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utiizar la funcion pow */

#include <stdio.h>

int main(){

    int x,y, resultado = 1;

    printf("\tPrograma que calcula x^y\n");
    printf("\nIngrese el valor de X: \n");
    scanf("%d",&x);
    printf("\nIngrese el valor de Y: \n");   
    scanf("%d",&y);

    for (int i = 1; i <= y ; i++)
    {
        resultado = resultado * x;
    }
    
    printf("\nLa potencia es: %d\n", resultado);


    return 0;
}