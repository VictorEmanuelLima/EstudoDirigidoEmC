#include <stdio.h>

int main(){
    int A[5], B[5][3],j, i;
    for (i = 0; i <= 4; i++){
        printf("Digite A%d: ", i+1); scanf("%d",&A[i]);
    }
    for (i=0; i<=2; i++){
        for (j = 0; j <= 4; j++){
            if (i == 0)
                B[j][i] = A[j] + 5;
            else if (i==1){
                B[j][i] = fatorial(A[j]);
            }
            else{
                B[j][i] = A[j] * A[j];
            }
        }
    }
    for (i=0; i<=2; i++){
        for (j = 0; j <= 4; j++){
            printf("B[%d][%d] = %d \n", j, i, B[j][i]);
        }
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
