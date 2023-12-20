// Correspondencia entre arrays y punteros

#include <stdio.h>

int main()
{
    int numero[] = {10, 20, 30, 40, 50};
    int *dir_numero;

    dir_numero = &numero[0]; // Mas facil = dir_numero = numero;

    for (int j = 0; j < 5; j++)
    {
        printf("\n[%d]. Elemento del vector [%d]", j, *dir_numero++);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nPosicion de memoria de [%d] es: %d", numero[i], dir_numero++);
    }

    return 0;
}