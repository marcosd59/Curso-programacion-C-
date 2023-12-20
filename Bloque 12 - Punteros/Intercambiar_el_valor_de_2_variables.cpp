#include <stdio.h>

void intercambiar(int *, int *);

int main()
{
    int a = 7, b = 8;

    printf("a = %d, b = %d\n", a, b);
    intercambiar(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
void intercambiar(int *x, int *y)
{
    int z;

    z = *x;
    *x = *y;
    *y = z;
}