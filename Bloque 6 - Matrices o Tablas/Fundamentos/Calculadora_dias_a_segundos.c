#include <stdio.h>

int main()
{

    int dia = 10;
    long int segundos = 0;

    for (int i = 1; i <= dia; i++)
    {
        segundos += 86400;
    }

    printf("En %d dias hay %d segundos\n", dia, segundos);

    return 0;
}
