/* 7. Pedir su nombre al usuario y devolver el numero de vocales que hay.

Nota: Recuerda que debes utilizar punteros. */

#include <stdio.h>
#include <string.h>

void pedirDATOS();
int contandoVOCALES(char *);

char nombreUSUARIO[30];

int main()
{
    pedirDATOS();
    printf("\nEl numero de vocales es: %d", contandoVOCALES(nombreUSUARIO));

    return 0;
}

void pedirDATOS()
{
    printf("Ingrese su nombre: ");
    gets(nombreUSUARIO);
    strupr(nombreUSUARIO); // Trasnformado a MAYUSCULAS.
}

int contandoVOCALES(char *nombre)
{
    int cont = 0;

    while (*nombre) // Mientras nombre no sea nulo '\0'.
    {
        switch (*nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cont++;
            break;
        }

        nombre++;
    }
    
    return cont;
}