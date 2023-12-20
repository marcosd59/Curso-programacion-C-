/* 3. Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los primeros enteros mayores a cero */

#include <stdio.h>

int main(){

    int suma = 0, cuadrado;

    for (int i = 1; i <= 10; i++)
    {
        cuadrado = i * i;
        suma += cuadrado;
    }
        printf("El resultado de la suma es: %d",suma);


    return 0;
}