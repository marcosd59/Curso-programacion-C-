/*3. Realice un programa que lea de la entrada estandar los siguientes datos
de una persona:

    Edad: dato de tipo entero.
    Sexo: dato de tipo caracter.
    Altura en metro: dato en tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

#include <stdio.h>

int main()
{
    int edad = 18;
    char sexo[20] = "Masculino";
    float altura = 1.70; 

    printf("\nTienes %d años",edad);
    printf("\nEres del sexo %s",sexo);
    printf("\nMides %f metros",altura);

    return 0;
}