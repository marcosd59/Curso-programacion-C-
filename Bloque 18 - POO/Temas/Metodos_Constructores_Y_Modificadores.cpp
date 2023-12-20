//Metodos constructores y modificadores (Getters) y (setters).

#include <stdio.h>
#include <stdlib.h>

class Punto
{
private: //Atributos.
    int x;
    int y;
public: //Metodos
    Punto();
    ~Punto();
    void setPunto(int, int);
    int getPuntoX();
    int getPuntoY();
};

Punto::Punto(/* args */)
{
}

Punto::~Punto()
{
}

void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Punto::getPuntoX()
{
    return x;
}

int Punto::getPuntoY()
{
    return y;
}

int main()
{
    Punto punto1;
    punto1.setPunto(15,10);

    printf("%d",punto1.getPuntoX());
    printf("\n%d",punto1.getPuntoY());

    return 0;
}