/*8. Escriba una funcion llamada cambio() que tenga un parametro en numero entero y seis parametros de referencia en numero enter0 nombrados cien, cincuenta, veinte, dies, cinco y uno, respectivamente. La funcion tiene quue considerar el valor entero
transmitido como una cantidad en dolares y convertir el valor en el numero de billete equivalentes. */

#include <stdio.h>

void cambio(int, int &, int &, int &, int &, int &, int &);

int main()
{
    int valor, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;

    printf("\nDigite un valor: ");
    scanf("%d", &valor);

    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

    printf("\ncantidad de billetes a entregar como cambio: ");
    printf("\nCien: %d", cien);
    printf("\nCiecuenta: %d", cincuenta);
    printf("\nVeinte: %d", veinte);
    printf("\nDiez: %d", diez);
    printf("\nCinco: %d", cinco);
    printf("\nUno: %d", uno);

    return 0;
}

void cambio(int valor, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = valor / 100;
    valor %= 100;
    cincuenta = valor / 50;
    valor %= 50;
    veinte = valor / 20;
    valor %= 20;
    diez = valor / 10;
    valor %= 10;
    cinco = valor / 5;
    uno = valor % 5;
}
