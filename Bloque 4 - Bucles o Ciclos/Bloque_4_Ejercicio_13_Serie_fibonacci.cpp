// 13. Hacer un programa que realice la serie fibonacci ---> 1 1 2 3 5 8 13 ... n

#include <stdio.h>

int main()
{

    int n, x = 0, y = 1, z = 1;

    printf("Digite el numero de elementos: ");
    scanf("%d", &n);

    printf("1 ");

    for (int i = 1; i < n; i++)
    {
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
    }

    printf("\n");

    return 0;
}