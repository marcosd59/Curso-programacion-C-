/*2. Escriba un programa que lea tres numeros y determine cual de ellos es mayor*/

#include <stdio.h>

int main(){

    int n1 = 100;
    int n2 = 100;
    int n3 = 30;

    if(n1==n2&&n2==n3){
    printf("Los tres numeros son iguales");
    }
    else if(n1==n2&&n1&&n2>n3){
    printf("Los primeros dos numeros estan repetidos, el mayor seria: %d",n1);
    }
    else if(n1>n2&&n1>n3){
    printf("El mayor es: %d",n1);
    }
    else if(n2>n1&&n2>n3){
    printf("El mayor es: %d",n2);
    }
    else{
    printf("El mayor es: %d",n3);
    }
 

    return 0;
}