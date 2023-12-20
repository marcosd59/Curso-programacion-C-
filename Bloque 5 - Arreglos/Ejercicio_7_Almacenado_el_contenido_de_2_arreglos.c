/* 7. Realiza un programa que defina dos vectores de caracteres y despues alamcene el
contenido de ambos vectores en un nuevo vector, situando en primer lugar los
contenidos del primer vector seguido por los elemntos del segundo vecor. Miestre
el contenido del nuevo cetor en la salida estandar. */

#include <stdio.h>

int main()
{
    char n1 [] = {'a','b','c','d','e'}; 
    char n2 [] = {'f','g','h','i','j'}; 
    char n3 [10];

    //Copiando los elemtos de n1 hacia n3

    for (int i = 0; i < 5; i++)
    {
        n3[i] = n1[i];
    }
    
    //Copiando los elemtos de n2 hacia n3

    for (int i = 5; i < 10; i++)
    {
        n3[i] = n2[i-5];
    }
    
    //Mostrar el nuevo vector

    for (int i = 0; i < 10; i++)
    {
        printf("%c",n3[i]);
    }

    return 0;
}