/* 3. Realice un programa en C++, de tal manera que se construya una solucion para la 
gerarquia (Herencia) de clases mostrada en la siguiente figura.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
    void mostrarPersona();
};

class Empleado : public Persona
{
private:
    float sueldo;
public:
    Empleado(string, int, float);
    void mostrarEmpleado();
};

class Estudiante : public Persona
{
private:
    float notaFinal;
public:
    Estudiante(string, int, float);
    void mostrarEstudiante();
};

class Universitario : public Estudiante
{
private:
    string carrera;
public:
    Universitario(string, int, float, string);
    void mostrarUniversitario();
};


Persona::Persona(string name, int age)
{
    nombre = name;
    edad = age;
}

void Persona::mostrarPersona()
{
    cout << "Nombre: " << nombre<<endl;
    cout << "Edad: " <<edad<<endl;
}

Empleado::Empleado(string name, int age, float salary) : Persona(name, age)
{
    sueldo = salary;
}

void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout << "Sueldo: " <<sueldo << endl;
}

Estudiante::Estudiante(string name, int age, float finalGrade) : Persona(name, age)
{
    notaFinal = finalGrade;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout << "Nota final: "<< notaFinal << endl;
}

Universitario::Universitario(string name, int age, float finalGrade, string race) : Estudiante(name, age, finalGrade)
{
    carrera = race;
}

void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout << "Carrera: "<< carrera << endl;
}

int main()
{
    Empleado empleado1("Pedro",22,5000);
    cout << "-Empleado-"<<endl;
    empleado1.mostrarEmpleado();
    cout << "\n";

    Estudiante estudiante1("Juan",13,7.5);
    cout << "-Estudiante-"<<endl;
    estudiante1.mostrarEstudiante();
    cout << "\n";

    Universitario universitario1("Marcos",18,9.0,"IDeIO");
    cout << "-Universitario-"<<endl;
    universitario1.mostrarUniversitario();
    cout << "\n";
    return 0;
}