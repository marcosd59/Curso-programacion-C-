/*Ejercicio 2 : Escribe un programa que lea de la entrada estandar el precio
de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA*/

//23-05-2021

#include <stdio.h>

int main(){

    float producto = 60;
    float IVA;
    float iva;

    printf("Ingrese el precio del producto: ");

    IVA = producto*16/100;
    iva = producto + IVA;

    printf("\nEl precio del producto con IVA es: %f",iva);

    return 0;

}