/* 11. Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include <stdio.h>

int main(){

    int saldo_inicial = 1000;
    int opc;
    float extra, saldo = 0,retiro;

    printf("\n\tBienvenido a su cajero virtual\n\n");
    printf("1. Ingresar dinero en su cuenta\n");
    printf("2. Retirar dinero de su cuenta\n");
    printf("3. Salir\n\n");
    printf("Opcion: ");
    scanf("%i",&opc);

    switch(opc)
    {
        case 1: printf("Ingrese una cantidad: ");
            scanf("%f",&extra);
            saldo = saldo_inicial + extra;
            printf("Dinero en cuenta: %.2f",saldo); break;
            
        case 2: printf("Digite la cantidad que desea retirar: ");
            scanf("%f",&retiro);
            if (retiro > saldo_inicial)
            {
                printf("\tNo tienes esa cantidad de dinero");
            }
            else
            {
                saldo = saldo_inicial - retiro;
                printf("Dinero en cuenta: %.2f",saldo); break;
            }
            
        case 3: printf("Saliendo..."); break;
    }
    return 0;
}