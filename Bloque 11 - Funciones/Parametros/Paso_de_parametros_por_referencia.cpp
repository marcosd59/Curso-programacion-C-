//Paso de parametros por referencia

#include <stdio.h>

void nuevo(int&, int&);

int main()
{
    int num1 = 5, num2 = 9;
    
    nuevo(num1,num2);

    printf("\nEl nuevo valor del primer numero es: %d",num1);
    printf("\nEl nuevo valor del segundo numero es: %d",num2);

    return 0;
}
void nuevo(int& xnum, int& ynum)
{
    printf("\nEl valor del primer numero es: %d", xnum);
    printf("\nEl valor del segundo numero es: %d", ynum);

    xnum = 89;
    ynum = 45;
}