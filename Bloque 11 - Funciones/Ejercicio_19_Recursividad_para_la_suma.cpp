/* 19. Realice una funcion recursiva que sume los primeros n enteros positivos. Nota: Para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante las siguiente recurrencia:

    suma(n) = 1             si, n = 1
            n+suma(n-1)     si, n > 1
*/

#include <stdio.h>

int suma(int);

int main()
{
    int nElementos;

    do
    {
        printf("\nDigite el numero de elementos: ");
        scanf("%d", &nElementos);
    } while (nElementos <= 0);

    printf("\nLa suma es: %d\n", suma(nElementos));
    
    return 0;
}

int suma(int n)
{
    int sumar = 0;

    if (n == 1) // Caso Base.
    {
        sumar = 1;
    }

    else // Caso general.
    {
        sumar = n + suma(n - 1);
    }

    return sumar;
}