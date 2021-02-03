#include <stdio.h>

int main(){
    long A[15], B[15], i, f;
    for (i = 0; i<= 14; i++){
        printf("Digite A%d: ", i+1);
		scanf("%d",&A[i]);
    }
    for (i = 0; i<= 14; i++){
            B[i]= fatorial(A[i]);
    }
    for (i = 0; i<= 14; i++){
        printf("B%d = %d.\n", i+1, B[i]);
    }
    system("pause");
    return 0;
}
int fatorial(N){
    long CONTADOR;
    long FATORIAL = 1;
    for(CONTADOR = 1; CONTADOR <= N; CONTADOR ++){
        FATORIAL *= CONTADOR;
    }
    return FATORIAL;
}
