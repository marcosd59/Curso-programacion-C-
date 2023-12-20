//Herencia en POO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

class Persona
{
private: //Atributos.
    string nombre;
    int edad;
public: //Metodos
    Persona(string, int);
    void mostrarPersona();
};

class Alumno : public Persona
{
private: //Atributos
    int matricula;
    float notaFINAL;
public: //Metodos
    Alumno(string, int, int, float);
    void mostrarAlumno();
};

Persona::Persona(string _nombre, int _edad) //Constructor de la clase persona (Clase padre).
{
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, int _matricula, float _notafinal) : Persona(_nombre, _edad)
{
    matricula = _matricula;
    notaFINAL = _notafinal;
}

void Persona::mostrarPersona()
{
    cout <<"Nombre: " <<nombre<<endl;
    cout <<"Edad: " <<edad<<endl;
}

void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout <<"Matricula: " <<matricula<<endl;
    cout <<"Nota final: " <<notaFINAL<<endl;
}

int main()
{
    Alumno alumno1("Marcos",18,200300591,9.5);
    alumno1.mostrarAlumno();

    return 0;
}