//Destructor

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;

class Perro
{
private: //Atributos.
    string nombre;
    string raza;
public: //Metodos.
    Perro(string, string);  // Constructor
    ~Perro();               // Destructor
    void mostrarDATOS();
    void jugar();
};

Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}

Perro::~Perro()
{
}

void Perro::mostrarDATOS()
{
    cout << "Nombre: " << nombre<<endl;
    cout << "Raza: " << raza<<endl;
}

void Perro::jugar()
{
    cout << "El perro '"<< nombre<< "' esta jugando"<<endl;
}

int main()
{
    Perro perro1("Fido","Doberman");

    perro1.mostrarDATOS();
    perro1.jugar();
    perro1.~Perro(); //Destruyendo el objeto.

    printf("\n");
    return 0;
}