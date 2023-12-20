/* Asignacion dinamica de arreglos

new: Reserva el numero de bits solicitados por la declaracion.
delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/

#include <stdio.h>
#include <stdlib.h>

void pedirNOTAS();   // Prototipo de la funcion.
void mostrarNOTAS(); // Prototipo de la funcion.

int numCALIFICACION, *calificacion;

int main()
{
    pedirNOTAS();
    mostrarNOTAS();

    delete[] calificacion; // Liberando el espacio en bytes utilizados anteriormente.

    return 0;
}

void pedirNOTAS()
{
    printf("\nDigite el numero de calificaciones: ");
    scanf("%d", &numCALIFICACION);

    calificacion = new int[numCALIFICACION]; // Crear arreglo.

    for (int i = 0; i < numCALIFICACION; i++)
    {
        printf("Ingresa la nota numero [%d]: ", i + 1);
        scanf("%d", &calificacion[i]);
    }
}

void mostrarNOTAS()
{
    printf("\nMostrando notas del usuario\n");
    for (int i = 0; i < numCALIFICACION; i++)
    {
        printf("\nNota [%d] = %d", i + 1, calificacion[i]);
    }
}