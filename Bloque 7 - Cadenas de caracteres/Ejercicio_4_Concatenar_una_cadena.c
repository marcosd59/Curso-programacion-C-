/* 4. Crear una cadena que tenga la siguiente frase, "Hoal que tal", luego
crear otra cadena que tenga para preguntarle al usuario su nombre, por ultimo
añadir el nombre y mostrar el mensaje completo "Hola que tal (nombre)" */

#include <string.h>
#include <stdio.h>

int main()
{

    char cadena1[] = {"Hola que tal "};
    char cadena2[30];
    char cadena3[30];

    printf("\nIngrese su nombre: ");
    gets(cadena2);

    strcpy(cadena3,cadena1);

    strcat(cadena3,cadena2);

    printf("\n%s\n",cadena3);

    return 0;
}