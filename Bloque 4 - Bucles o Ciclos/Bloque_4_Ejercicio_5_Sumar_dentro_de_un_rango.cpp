/* Escriba un programa que ela valores enteros hasta que se introduzca un valor en el rango de [20 - 30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos */

#include <stdio.h>
#include <conio.h>

int main(){

    int numero, suma = 0; 
    
    do
    {
        printf("Digite un numero: ");
        scanf("%d",&numero);

        if (numero > 0)
        {
            suma += numero;
        }
        

    } while (((numero < 20) || (numero > 30)) && (numero != 0));
    

    printf("La suma es: %d",suma);

    getch();


    return 0;
}