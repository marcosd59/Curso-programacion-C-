/*4. Ejecute el programa del ejercicio anterior con entradas erroneas y observe 
los resultados. Por ejmplo, introduzca un dato de tipo caracter conado se espera un dato de tipo entero.*/

#include <stdio.h>

int main(){

    int edad = "Masculino";
    char sexo[20] = 18;
    float altura = 1.70; 

    printf("\nTienes %d años",edad);
    printf("\nEres del sexo %s",sexo);
    printf("\nMides %f metros",altura);

    return 0;
}
