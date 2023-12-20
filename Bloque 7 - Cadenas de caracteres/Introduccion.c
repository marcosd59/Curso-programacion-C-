//Cadenas de caracteres

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palabra[] = "Marcos";
    char palabra2[] = {'M','a','r','c','o','s'};
    char nombre[30];

    printf("\n%s, por favor ingrese su nombre completo: ",palabra);

    //"gets" no es muy recomendable para cadenas de caracteres ya que roba memoria, mejor usar cin.getline
    
    gets(nombre);
    
    printf("\nSu nombre completo es: %s\n",nombre);

    return 0;
}