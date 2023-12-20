// Escribir en un archivo de texto.

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void escribir();

int main()
{
    escribir();
    return 0;
}
void escribir()
{
    ofstream archivo;

    // archivo.open("d:/NOVA//prueba.txt",ios::out); //Creamos el archivo en otra ubicacion. 
    archivo.open("Escritura.txt",ios::out); // [out] Creamos el archivo en la misma carpeta.

    if (archivo.fail())
    {
        cout<<"\nNo se pudo abrir el archivo.\n";
        exit(1);
    }
    archivo<<"Hola Mundo. Mi nombre es Marcos."; //Escribir dentro sin pedir al usuario.
    archivo.close();
}