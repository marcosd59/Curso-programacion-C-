/* 1. Construya una clase llamada rectangulo que tenga los siguientes atributos: Largo y ancho,
y los siguientes Metodos: perimetro() y area(). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Rectangulo
{
private: // Atributos.
    float largo;
    float ancho;

public:                       // Metodos.
    Rectangulo(float, float); // Constructor.
    void perimetro();
    void area();
};
Rectangulo::Rectangulo(float _largo, float _ancho) // Constructor, nos sirve para inicializar los atributos.
{
    largo = _largo;
    ancho = _ancho;
}
void Rectangulo::perimetro()
{
    printf("El largo es: %.2f y el ancho es: %.2f .Perimetro = %.2f\n", largo, ancho, largo + largo + ancho + ancho);
}
void Rectangulo::area()
{
    printf("El largo es: %.2f y el ancho es: %.2f .Area = %.2f\n", largo, ancho, largo * ancho);
}
int main()
{
    Rectangulo a1 = Rectangulo(5.3, 3.4);
    Rectangulo a2(8.2, 4.1);

    a1.perimetro();
    a1.area();

    a2.perimetro();
    a2.area();

    return 0;
}