// Estructuras anidadas

#include <stdio.h>

struct info_direccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    float salario;
} empleado[2];

int main()
{

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin); // Vaciar el buffer y permitir digitar los valores
        printf("\nDigite su nombre: ");
        gets(empleado[i].nombre);
        printf("\nDigite su direccion: ");
        gets(empleado[i].dir_empleado.direccion);
        printf("\nIngrese su ciudad: ");
        gets(empleado[i].dir_empleado.ciudad);
        printf("\nIngrese su provincia: ");
        gets(empleado[i].dir_empleado.provincia);
        printf("\nDigite su salario: ");
        scanf("%f", &empleado[i].salario);
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nNombre: %s", empleado[i].nombre);
        printf("\nDireccion: %s ", empleado[i].dir_empleado.ciudad);
        printf("\nProvincia: %s ", empleado[i].dir_empleado.provincia);
        printf("\nSalario: %f ", empleado[i].salario);
    }

    return 0;
}