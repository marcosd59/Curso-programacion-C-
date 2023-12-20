/* 8. Realice un programa que calcule el producto de dos matrices cuadradas de 3 x 3 */

#include <stdio.h>

int main()
{

	int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int B[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int C[3][3];
	
	//Multiplicando las matrices

	for(int i = 0; i < 3; i++)
    {
		for(int j = 0; j < 3; j++)
        {
			C[i][j] = 0;

			for(int k = 0; k < 3; k++)
            {
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	
	//Resultado de la multiplicacion

	for(int i = 0; i < 3; i++)
    {
		for(int j = 0; j < 3; j++)
        {
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}	
	


    return 0;
}