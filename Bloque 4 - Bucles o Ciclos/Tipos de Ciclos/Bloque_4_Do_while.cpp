/* La sentencia do while

    do
    {
        conjunto de instrucciones;
    } while(expresion logica);

*/

#include <stdio.h>

int main()
{

    int i;

    i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}