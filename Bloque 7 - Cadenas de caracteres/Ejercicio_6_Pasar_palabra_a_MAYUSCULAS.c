/* 6. Convertir dos cadenas de minusculas a MAYUSCULAS. compararlas, y decir si son iguales o no */

#include <string.h>
#include <stdio.h>

int main()
{
    char palabra[] = {"marcos"};
    char palabra2[] = {"pool"};
    
    strupr(palabra);
    strupr(palabra2);
  
    if (strcmp(palabra,palabra2)==0)
    {
        printf("\nLas 2 palabras son iguales\n");
    }
    else
    {
        printf("\nLas 2 palabras no son iguales\n");
    }

    printf("\nPalabra 1: %s\n",palabra);
    printf("\nPalabra 2: %s\n",palabra2);

    return 0;
}