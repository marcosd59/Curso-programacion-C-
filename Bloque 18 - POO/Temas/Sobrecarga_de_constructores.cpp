//Sobrecarga de constructores.

#include <stdio.h>
#include <stdlib.h>

class Fecha
{
    private: //Atributos.
    int dia;
    int mes;
    int anio;
    public: //Metodos.
    Fecha(int, int, int); //Constructor 1.
    Fecha(long); //Constructor 2.
    void mostrarFecha();
};
Fecha::Fecha(int _dia, int _mes, int _anio) //Constructor 1. Inicializar atributos.
{
    anio = _anio;
    mes = _mes;
    dia = _dia;
}
Fecha::Fecha(long fecha) //Constructor 1. Inicializar atributos.
{
    anio = int(fecha/10000); //Extraer el anio.
    mes = int((fecha-anio*10000)/100); //Extraer el mes.
    dia = int (fecha-anio*10000-mes*100); //Extrar el dia.
}
void Fecha::mostrarFecha()
{
    printf("La fecha es: %d/%d/%d\n",dia,mes,anio);
}
int main()
{
    Fecha hoy(22,06,2021);
    Fecha ayer(20210621);

    hoy.mostrarFecha();
    ayer.mostrarFecha();

    return 0;
}