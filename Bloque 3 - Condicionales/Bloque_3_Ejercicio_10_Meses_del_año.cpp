/* 10. Mostrar los meses del año, pidiendo al usuario un numero entre (1-12), y mostrar el mes alq ue corresponde.*/

#include <stdio.h>

int main(){


    int mes;

    printf("Digita un numero y descubre a que mes del año pertenece: \n");
    scanf("%i",&mes);


    switch(mes)
    {
    case 1: printf("\nENERO\n"); break;
    case 2: printf("FEBRERO\n"); break;
    case 3: printf("MARZO\n"); break;
    case 4: printf("ABRIL\n"); break;
    case 5: printf("MAYO\n"); break;
    case 6: printf("JUNIO\n"); break;
    case 7: printf("JULIO\n"); break;
    case 8: printf("AGOSTO\n"); break;
    case 9: printf("SEPTIEMBRE\n"); break;
    case 10: printf("OCTUBRE\n"); break;
    case 11: printf("NOVIEMBRE\n"); break;
    case 12: printf("DICIEMBRE\n"); break;
    default: printf("NO ES UN NUMERO DEL (1-12)"); break;
    }

    return 0;
}