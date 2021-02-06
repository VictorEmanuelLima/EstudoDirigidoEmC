#include <stdio.h>
int main()
{
	float A[3][3];
	int i, j;
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Digite A[%d][%d]: ", i, j); scanf("%f", &A[i][j]);
		}
	}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			if (i == j)
				printf("A[%d][%d]: %f \n",i, j, A[i][j] * 2);
			else
				printf("A[%d][%d]: %f \n",i, j, A[i][j] * 3);
		}
	}
	system("pause");
	return 0;
}