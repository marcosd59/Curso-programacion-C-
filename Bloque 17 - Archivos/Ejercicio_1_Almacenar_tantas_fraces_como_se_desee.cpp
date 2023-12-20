/* 1. Realizar un programa que pida al usuario el nombre de un fichero de texto y, a continuacon
permita almacenar al usuario tantas frases como el usuario desee. */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void escribir();

int main()
{
    escribir();
    system("pause");
    return 0;
}
void escribir()
{
    ofstream archivo;
    string nombreArchivo, frase;
    char respuesta;

    cout << "Digite el nombre del archivo (agregar al final '.txt'): ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out); // Creamos el archivo con el nombre que digito el usuario.

    if (archivo.fail())
    {
        cout << "\nNo se pudo abrir el archivo.\n";
        exit(1);
    }

    do
    {
        fflush(stdin);
        cout << "Digite el texto del archivo: ";
        getline(cin, frase);
        archivo << frase << endl;
        // archivo<<frase<<" ";
        cout << "\nDesea ingresar otra frase (s/n)?: ";
        cin >> respuesta;
    } while ((respuesta == 's') || (respuesta == 'S'));

    archivo.close();
}