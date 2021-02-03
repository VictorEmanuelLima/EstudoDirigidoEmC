#include <stdio.h>

int main(){
    long A[15], B[15];
    int i;
    for (i = 0; i<= 14; i++){
        printf("Digite A%d: ", i+1); scanf("%d",&A[i]);
    }
    for (i = 0; i<= 14; i++){
        B[i] = A[i] * A[i];
    }
    for (i = 0; i<= 14; i++){
        printf("A%d = %d -- B%d = %d\n", i+1, A[i], i+1, B[i]);
    }
    system("pause");
    return 0;
}
