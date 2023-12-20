//Lectura de un archivo de texto.

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
    string texto;

    // archivo.open("d:/NOVA//prueba.txt",ios::in); //Abrimos el archivo desde una ubicacion en especifica. 
    archivo.open("Lectura.txt",ios::in); //[in] Abrimos el archivo en modo lectura desde la misma carpeta.

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