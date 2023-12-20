//Añadir texto en un archivo.

#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

void aniadir();

int main()
{
    aniadir();
    return 0;
}
void aniadir()
{
    ofstream archivo;
    string texto;

    archivo.open("Añadir.txt",ios::app); //Abrimos el archivo en modo aniadir.

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    archivo<<"\nSenpa ~ Let's play with Kasumi without sleeping ~";
    archivo.close();
}