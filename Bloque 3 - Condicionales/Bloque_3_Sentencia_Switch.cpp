/* La sentencia switch

    switch(exprecion){
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjunto de instrucciones2;
            break;
        case literaln:
            conjunto de instruccionesn;
            break;
        default
         conjunto de instrucciones por defecto;
            break;
    }
*/

#include <stdio.h>

int main(){

    int numero = 1;


    switch(numero){
        
        case 1: printf("Es el numero 1"); break;
        case 2: printf("Es el numero 2"); break;
        case 3: printf("Es el numero 3"); break;
        default: printf("No ha digitado un numero correcto"); break;
    }




    return 0;
}
