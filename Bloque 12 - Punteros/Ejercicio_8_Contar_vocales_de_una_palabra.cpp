/*Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres. NOTA: Usar punteros*/

#include <stdio.h>
#include <string.h>

void pedirDATOS();
void contandoVOCALES(char *);

char palabraUSUARIO[30];

int main()
{
    pedirDATOS();
    contandoVOCALES(palabraUSUARIO);

    return 0;
}
void pedirDATOS()
{
    printf("Digite una palabra: ");
    gets(palabraUSUARIO);
    strupr(palabraUSUARIO); // Trasnformado a MAYUSCULAS
}
void contandoVOCALES(char *palabra)
{
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    while (*palabra) // Mientras nombre no sea nulo '\0'
    {
        switch (*palabra)
        {
        case 'A':
            contA++;
            break;
        case 'E':
            contE++;
            break;
        case 'I':
            contI++;
            break;
        case 'O':
            contO++;
            break;
        case 'U':
            contU++;
            break;
        }
        palabra++;
    }
    printf("\nEl numero de vocales A: %d", contA);
    printf("\nEl numero de vocales E: %d", contE);
    printf("\nEl numero de vocales I: %d", contI);
    printf("\nEl numero de vocales O: %d", contO);
    printf("\nEl numero de vocales U: %d", contU);
}