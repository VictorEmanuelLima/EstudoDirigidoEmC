#include <stdio.h>

int main(){
    int A[20], B[20], i;
    for (i = 0; i<= 19; i++){
        printf("Digite A%d: ", i+1); scanf("%d",&A[i]);
    }
    for (i = 19; i >= 0; i--){
        B[19 - i] = A[i];
    }
    for (i = 0; i<= 19; i++){
        printf("A%d = %d -- B%d = %d\n", i+1, A[i], i+1, B[i]);
    }
    system("pause");
    return 0;
}
