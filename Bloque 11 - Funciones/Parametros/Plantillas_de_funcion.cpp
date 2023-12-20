/* Plantilla de funcion - Sirve para hacer una funcion general, ejemplo: entero, real, etc

Ejemplo: Sacar el valor absoluto de un numero */

#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

// Prototipo de la funcion

template <class TIPOD>
void mostrarABS(TIPOD numero);

int main()
{
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrarABS(num1);
    mostrarABS(num2);
    mostrarABS(num3);

    return 0;
}

template <class TIPOD>
void mostrarABS(TIPOD numero)
{
    if (numero < 0)
    {
        numero = numero * -1;
    }

    cout << "El valor absoluto del numero es: " << numero << endl;
    // printf("\nEl valor obsoluto del numero es: %g",numero);
}