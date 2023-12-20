/*5. Escriba un fragmento de programa que intercambie los valores de dos variables
ejemplo 

x = 10
y = 5

x = 5 
y = 10

*/

#include <stdio.h>

int main(){

    int x = 10;
    int y = 5;

    int c = 0;


    c = x;
    x = y;
    y = c;

    printf("X = %d Y = %d",x,y);




    return 0;
}