#include <stdio.h>
int main()
{
	int i, j;
	char A[12][20], X[20];
    for (i = 0; i < 12; i ++){
    	printf("Digite o %2do. nome: ", i + 1);
 	 	fflush(stdin); fgets(A[i], 40, stdin);
 	} 
    for (i = 0; i < 12; i ++){
    	for (j = i + 1; j < 12; j ++){
    		if (strcmp(A[i], A[j]) < 0){
    			strcpy(X, A[i]); 
				strcpy(A[i], A[j]);
	 	 	    strcpy(A[j], X);
			} 
		}
	}
	for (i = 0; i <= 9; i ++)
		printf("Nome: %2d --> %s", i + 1, A[i]);
	system("pause");
	return 0;
}