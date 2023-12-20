/* 5. Escriba una plantilla de funcion llamada despliegue() que despliegue el
valor del argumento unico que se le transmite cuando es invocado la funcion. */

#include <stdio.h>
#include <iostream>

using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main()
{
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.7890;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato)
{
    cout << "\nEl dato es: " << dato << endl;
}
