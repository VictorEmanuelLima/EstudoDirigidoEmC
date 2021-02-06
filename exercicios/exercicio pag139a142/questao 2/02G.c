#include <stdio.h>
int main()
{
	float A[4][4];
	int i, j;
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("Digite A[%d][%d]: ", i, j); scanf("%f", &A[i][j]);
		}
	}
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			if (i == j)
				printf("A[%d][%d]: %f \n", i, j, A[i][j]);
		}
	}
	system("pause");
	return 0;
}