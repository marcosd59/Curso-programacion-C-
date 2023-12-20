/* 2. Construya una clase Tiempo que contenga los isguientes atributos enteros: horas, minutos y segundos.
Haga que la clase contenga 2 constructores, el primero debe tener 3 parametros Tiempo(int,int,int) y el segundo
solo tendra un campo que seran los segundos y desensamble el numero entero largo en horas, minutos y segundos. */

#include <stdio.h>
#include <stdlib.h>

class Tiempo
{
private:
    int horas;
    int minutos;
    int segundos;
public:
    Tiempo(int,int,int);
    Tiempo(long);
    void mostrarTIEMPO();
};
Tiempo::Tiempo(int _horas,int _minutos, int _segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}
Tiempo::Tiempo(long tiempoSeg)
{
    horas = tiempoSeg/3600;
    tiempoSeg %= 3600;
    minutos = tiempoSeg/60;
    segundos = tiempoSeg % 60;
}
void Tiempo::mostrarTIEMPO()
{
    printf("La hora es: %d-%d-%d\n",horas,minutos,segundos);
}
int main()
{
    Tiempo ahora(16,23,30);
    Tiempo antes(55410);

    ahora.mostrarTIEMPO();
    antes.mostrarTIEMPO();
    return 0;
}