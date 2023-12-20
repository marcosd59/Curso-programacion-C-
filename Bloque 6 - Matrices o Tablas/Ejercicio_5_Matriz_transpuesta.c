/* 5. Realice un programa que lea una matriz de 3 x 3 y cree su matriz traspuesta.
La matriz transpuesta es aquellla en la que la columna i era la fila i de la matriz original.

|1 2 3|     |1 4 7|
|4 5 6| --> |2 5 8|
|7 8 9|     |3 6 9|

*/

#include <stdio.h>

int main()
{
    int tabla[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Matriz de 3 x 3, Ingrese los elemetos.\n\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento [%d, %d]: ",i,j);
            scanf("%d",&tabla[i][j]);
        }
        
    }

	printf("\nMostrando Matriz original\n\n");
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", tabla[i][j]);
		}	
    printf("\n");
    }

    printf("\n");

	printf("Mostrando Matriz transpuesta\n\n");
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", tabla[j][i]);
		}	
    printf("\n");
    }
    return 0;
}