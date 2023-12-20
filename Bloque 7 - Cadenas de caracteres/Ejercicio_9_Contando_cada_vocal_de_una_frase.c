/* 9. Realice un programa que lea una cadena de caracteres de la entrada estandar y
muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase [30];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    printf("\nDigite una frase: ");
    gets(frase);

    for (int i = 0; i < 30; i++)
    {
        switch (frase[i])
        {
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }
    
    vocal_a--;
    vocal_o--;

    printf("\nLa vocal 'a' apareces %d veces\n",vocal_a);
    printf("\nLa vocal 'e' apareces %d veces\n",vocal_e);
    printf("\nLa vocal 'i' apareces %d veces\n",vocal_i);
    printf("\nLa vocal 'o' apareces %d veces\n",vocal_o);
    printf("\nLa vocal 'u' apareces %d veces\n",vocal_u);

    return 0;
}