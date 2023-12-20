/* 6. Escriba una plantilla de funcion llamada maximo() que debuelva el valor maximo de tres argumentos que
se transmitan a la funcion cuando sea llamada. Suponga que los tres argumentos
seran del mismo tipo de dato. */

#include <stdio.h>
#include <iostream>

using namespace std;

template <class TIPO>
TIPO maximo(TIPO num1, TIPO num2, TIPO num3);

int main()
{
    cout << "El valor maximo es: " << maximo(3000.0, 800.9, 100.1) << endl;
    return 0;
}

template <class TIPO>
TIPO maximo(TIPO num1, TIPO num2, TIPO num3)
{
    TIPO max = num1;

    if (num2 > num1 && num2 > num3)
    {
        max = num2;
    }
    
    if (num3 > num1 && num3 > num2)
    {
        max = num3;
    }

    return max;
}