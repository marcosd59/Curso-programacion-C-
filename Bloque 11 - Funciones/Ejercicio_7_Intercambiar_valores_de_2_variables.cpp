/* 7. Intercambiar el valor de 2 variables utilizando paso de parametros por referencia. */

#include <stdio.h>

void intercambiar(int &, int &);

int main()
{
    int num1 = 10, num2 = 15;

    printf("\nEl valor de num1 es: %d", num1);
    printf("\nEl valor de num2 es: %d", num2);

    printf("\n");

    intercambiar(num1, num2);

    printf("\nEl NUEVO valor de num1 es: %d", num1);
    printf("\nEl NUEVO valor de num2 es: %d", num2);

    printf("\n");
    
    return 0;
}
void intercambiar(int &num1, int &num2)
{
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;
}