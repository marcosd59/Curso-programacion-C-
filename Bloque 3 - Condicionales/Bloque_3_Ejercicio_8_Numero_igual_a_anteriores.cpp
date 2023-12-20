/*8. Escribe un programa que lea de las entrada estandar tres numeros. Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de los introduciodos con anterioridad*/

#include <stdio.h>

int main(){

    int n1 = 2;
    int n2 = 4;
    int n3 = 6;

    //printf("Ingrese un cuarto numero");

    int n4 = 6;

    if (n4 == n1 )
    {
        printf("El numero concide con %d",n1);
    }
    else if (n4 == n2)
    {
        printf("El numero concide con %d",n2);
    }
    else if (n4 == n3)
    {
        printf("El numero concide con %d",n3);       
    }
    else
    {
        printf("El numero NO concide");
    }
    
    


    return 0;
}