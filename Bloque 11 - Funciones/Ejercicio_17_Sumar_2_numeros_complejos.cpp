/* 17. Sumar 2 numeros complejos

z1 = 5-3i      ,   z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
        = 5-3i -4+2i
        = 1-i
*/

#include <stdio.h>

struct complejo
{
    float real;
    float imaginaria;
} z1, z2;

void pedirDATOS();
complejo suma(complejo, complejo);
void muestra(complejo);

int main()
{
    pedirDATOS();
    complejo x = suma(z1, z2);
    muestra(x);

    return 0;
}

void pedirDATOS()
{
    printf("\nDigite los datos para el primer numero complejo\n");
    printf("Parte real: ");
    scanf("%f", &z1.real);
    printf("Parte imaginaria: ");
    scanf("%f", &z1.imaginaria);
    printf("\nDigite los datos para el segundo numero complejo\n");
    printf("Parte real: ");
    scanf("%f", &z2.real);
    printf("Parte imaginaria: ");
    scanf("%f", &z2.imaginaria);
}

complejo suma(complejo z1, complejo z2)
{
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}

void muestra(complejo x)
{
    printf("\nEl resultado de la suma es: %.1f, %.1f", x.real, x.imaginaria);
}