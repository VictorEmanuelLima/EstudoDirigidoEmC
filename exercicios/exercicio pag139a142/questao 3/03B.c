#include <stdio.h>
int main()
{
	int i, j, A[8], B[8], X, ACHA, PESQ, I;
	char RESP;
    for (i = 0; i < 8; i ++){
    	printf("Digite A[%d]: ", i + 1);
 	 	fflush(stdin); scanf("%d", &A[i]);
 	} 
 	for (i = 0; i < 8; i ++){
    	B[i] =  A[i]*5;
 	} 
    for (i = 0; i < 8; i ++){
    	for (j = i + 1; j < 8; j ++){
    		if (B[i] > B[j]){
 			    X = B[i]; 
				B[i] = B[j];
 	    	 	B[j] = X;
			} 
		}
	}
	for (i = 0; i < 8; i ++)
		printf("B[%d] = %d\n", i + 1, B[i]);
	RESP = 's';
	while (RESP == 'S' || RESP == 's'){
		printf("\nEntre o numero a ser pesquisado: ");
		fflush(stdin); scanf("%d", &PESQ);
		I = 0;
		ACHA = 0;
        while (I <= 9 && ACHA == 0)
        	if (PESQ == B[I])
				ACHA = 1;
 	 	    else
				I ++;
		if (ACHA == 1)
			printf("%d foi localizado na posicao %d",PESQ, I+1);
		else
			printf("%d nao foi localizado", PESQ);
		printf("\n\n Deseja Continua? [S]IM/[N]AO + <Enter>: ");
		fflush(stdin); RESP = getchar();
    }
	system("pause");
	return 0;
}