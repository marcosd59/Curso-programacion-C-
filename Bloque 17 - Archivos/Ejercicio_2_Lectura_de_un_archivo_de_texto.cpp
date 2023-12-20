/* 2. Realice un programa que pida al usuario el nombre o ubicacion de un archivo de texto
y acontinuacion de lectura al archivo de texto. */

#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

void lectura();

int main()
{
    lectura();
    return 0;
}
void lectura()
{
    ifstream archivo;
    string texto, nombreArchivo;

    cout<<"\nDigite el nombre o la ubicacion del archivo que desea abrir: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::in); 

    if(archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) //Mientras no sea el final del archivo.
    {
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    archivo.close(); //Cerramos el archivo.
}