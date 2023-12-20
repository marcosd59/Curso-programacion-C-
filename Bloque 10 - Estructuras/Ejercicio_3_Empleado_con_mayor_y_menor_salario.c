/* 3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario. */

#include <stdio.h>
#include <string.h>

struct empleado
{
    char nombre[20];
    float salario;
} emp[100];

int main()
{
    int n_empleados, posM = 0, posm = 0;
    float mayor = 0, menor = 9999999;

    printf("\nIngrese el numero de empleados: ");
    scanf("%d", &n_empleados);

    for (int i = 0; i < n_empleados; i++)
    {
        fflush(stdin); // Vaciar el buffer y permitir digitar los valores
        printf("\n%d. Ingrese su nombre: ", i + 1);
        scanf("%s", &emp[i].nombre);
        printf("\nIngrese su salario: ");
        scanf("%f", &emp[i].salario);

        if (emp[i].salario > mayor)
        {
            mayor = emp[i].salario;
            posM = i;
        }

        if (emp[i].salario < menor)
        {
            menor = emp[i].salario;
            posm = i;
        }

        printf("\n");
    }

    printf("\nDatos del empleado con mayor salario\n");
    printf("\nNombre: %s", emp[posM].nombre);
    printf("\nSalario: %.2f", emp[posM].salario);

    printf("\n");

    printf("\nDatos del empleado con menor salario\n");
    printf("\nNombre: %s", emp[posm].nombre);
    printf("\nSalario: %.2f", emp[posm].salario);

    printf("\n");

    return 0;
}
