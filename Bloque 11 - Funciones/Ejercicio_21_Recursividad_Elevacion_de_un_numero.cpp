/* 21. Escriba una funcion recursiva que calcule un numero elevado a una potencia
emter mayor o igual que cero: x^y.

    potencia = x                , y = 1
            potencia(x,y-1)     , y > 1
*/

#include <stdio.h>

int potencia(int, int);

int main()
{
    int base, exponente;

    printf("\nDigite la base: ");
    scanf("%d", &base);
    printf("Digite el exponente: ");
    scanf("%d", &exponente);

    printf("\nLa potencia de %d^%d es: %d\n", base, exponente, potencia(base, exponente));

    return 0;
}
int potencia(int x, int y)
{
    int pot;
    if (y == 1) // Caso base.
    {
        pot = x;
    }
    else // Caso general.
    {
        pot = x * potencia(x, y - 1);
    }
    
    return pot;
}