//Clases en C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

class Persona
{
    private: //Atributos.
    int edad;
    string nombre;
    public: //Metodos.
    Persona(int, string); //Constructor.
    void leer();
    void correr();
};
Persona::Persona(int _edad, string _nombre) //Constructor, nos sirve para inicializar los atributos.
{
    edad = _edad;
    nombre = _nombre;
}
void Persona::leer()
{
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro."<<endl;
}
void Persona::correr()
{
    cout<<"Soy "<<nombre<<" y estoy corriendo un marraton y tengo "<<edad<<endl;
}
int main()
{
    Persona p1 = Persona(18,"Marcos");
    Persona p2(19,"Alejandro");
    Persona p3(21,"Juan");
    p1.correr();
    p2.correr();
    p3.correr();

    return 0;
}