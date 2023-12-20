#include <stdio.h>

typedef int entero;
typedef int arreglo10[10];

int main()
{

    arreglo10 a = {}, b = {}, c = {}, d, e, f;

    // arreglo10 b = {};
    // arreglo10 c = {};
    // int a[10], b[10], c[10], d[10], e[10], f[10];

    a[7] = 9;
    b[4] = -56;
    c[6] = -76;
    d[3] = 4;

    printf("%d", a[7]);

    return 0;
}