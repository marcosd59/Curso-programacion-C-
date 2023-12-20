/*7. Escriba un programa que solicite una edad (un entero) e indique en la 
salida estandar si la edad introducida esta en el rango de [18-25]*/

#include <stdio.h>

int main(){

    int edad = 20;

    if (edad >= 18 && edad <= 25)
    {
        printf("Esta en el rango de [18 - 25]");
    }
    else
    {
        printf("NO esta en el rango de [18 - 25]");
    }
    


    return 0;
}