#include <stdio.h>

int main(){
    int A[20], B[20], C[5], i;
    for (i = 0; i<= 19; i++){
        printf("Digite A%d: ", i+1); scanf("%d",&A[i]);
		printf("Digite B%d: ", i+1); scanf("%d",&B[i]);
    }
    for (i = 0; i<= 19; i++){
        C[i] = A[i] - B[i];
        }
    for (i = 0; i<= 19; i++){
        printf("C%d = %d.\n", i+1, C[i]);
    }
    system("pause");
    return 0;
}
