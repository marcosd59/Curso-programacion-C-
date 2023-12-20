/* 4. Crear un programa en C++, que tenga la siguiente jerarquia de clases: 
Animal(Clase padre) -> Humano(Clase hija) -> Perro (Clase hija), y hacer polimorfismo con el metodo comer(). */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal
{
    private:
        int edad;
    public:
        Animal(int);
        virtual void comer();
};

class Humano : public Animal
{
    private:
        string nombre;
    public:
        Humano(int, string);
        void comer();
};

class Perro : public Animal
{
    private:
        string nombre; 
        string raza;
    public:
        Perro(int, string, string);
        void comer();
};

Animal::Animal(int age)
{
    edad = age;
}

void Animal::comer()
{
    cout << "Yo como ";
}

Humano::Humano(int age, string name) : Animal(age)
{
    nombre = name;
}

void Humano::comer()
{
    Animal::comer();
    cout << "en una mesa, sentado en su silla."<<endl;
}

Perro::Perro(int age, string name, string breed) : Animal(age)
{
    nombre = name;
    raza = breed;
}

void Perro::comer()
{
    Animal::comer();
    cout << "en el suelo, con su plato."<<endl;
}

int main()
{
    Animal *animales[2];

    animales[0] = new Perro(5,"Firulais","De calle");
    animales[0]->comer();

    animales[1] = new Humano(18,"Marcos");
    animales[1]->comer();

    return 0;
}