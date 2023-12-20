//Polimorfismo

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
    virtual void mostrar();
};

class Alumno : public Persona
{
private:
    float notaFinal;
public:
    Alumno(string, int, float);
    void mostrar();
};

class Profesor : public Persona
{
private:
    string materia;
public:
    Profesor(string, int, string);
    void mostrar();
};

Persona::Persona(string name, int age)
{
    nombre = name;
    edad = age;
}

void Persona::mostrar()
{
    cout << "Nombre: " << nombre<<endl;
    cout << "Edad: " <<edad<<endl;
}

Alumno::Alumno(string name, int age, float finalGrade) : Persona(name, age)
{
    notaFinal  = finalGrade;
}

void Alumno::mostrar()
{
    Persona::mostrar();
    cout << "Nota final: " << notaFinal <<endl;
}

Profesor::Profesor(string name, int age, string course) : Persona(name, age)
{
    materia = course;
}

void Profesor::mostrar()
{
    Persona::mostrar();
    cout << "Materia: " << materia <<endl;
}

int main()
{
    Persona *vector[3];

    vector[0] = new Alumno("Marcos",20,10.5);
    vector[0]->mostrar();
    cout <<"\n";
    vector[1] = new Alumno("Juan",19,8.5);
    vector[1]->mostrar();
    cout <<"\n";
    vector[2] = new Profesor("Jose",25,"Algoritmos");
    vector[2]->mostrar();
    cout <<"\n";
    
    return 0; 
}