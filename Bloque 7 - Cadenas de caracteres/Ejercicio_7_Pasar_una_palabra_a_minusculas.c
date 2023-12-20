/* 7. Pedir su nombre al usuario en MAYUSCULAS, si su nombre comienza con la aletra A,
convierte su nombre a minusculas, caso contrario no convertirlo. */

#include <string.h>
#include <stdio.h>

int main()
{
    char nombre[30];
    char nombre2[] = {'B'};
    
    printf("\nIngresa tu nombre el MAYUSCULAS: ");
    gets(nombre);
    

    if (strcmp(nombre2,nombre) > 0)
    {
        strlwr(nombre);
        printf("\nTu nombre en minusculas es: %s\n",nombre);
    }
    else
    {
        printf("\nTu nombre no inicia con A\n");
        printf("\nTu nombre: %s\n",nombre);
    }
    
    return 0;
}