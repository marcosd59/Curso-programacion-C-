// Devolver valores multiples

// Sumar y multiplicar 2 numeros

#include <stdio.h>

void calcular(int, int, int &, int &);

int main()
{
    int num1, num2, suma = 0, producto = 0;

    printf("\nDiigite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    calcular(num1, num2, suma, producto);
    printf("\nEl valor de la suma es: %d", suma);
    printf("\nEl valor de la multiplicacion es: %d", producto);
    printf("\n");

    return 0;
}
void calcular(int num1, int num2, int &suma, int &producto)
{
    suma = num1 + num2;
    producto = num1 * num2;
}