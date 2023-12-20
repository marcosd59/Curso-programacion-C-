/* 15. Realice un programa que solicite al usuario que piense un numero entre 1 al 10. El programa debe generar un numero aleatorio en ese mismo rango e indicarle al
usuario si el numero que indico es menor o mayor al numero aleatorio, asi hasta que lo adivine. Por ultimo mostrarle el numero de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior+ 1 - limite inferior);
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numero, dato, contador = 0;

    printf("\t\nAdivina el numero de 1 a 100\n");

    srand(time(NULL));
    dato = 1 + rand() % (100);

    do
    {
        printf("Digite un numero: ");
        scanf("%d", &numero);

        if (numero > dato)
        {
            printf("Digite un numero menor\n");
        }
        if (numero < dato)
        {
            printf("Digite un numero MAYOR\n");
        }

        contador++;

    } while (numero != dato);

    printf("\n FELICIDADES ADIVINASTE EL NUMERO\n");
    printf("\nNumero de intentos: %d", contador);

    return 0;
}