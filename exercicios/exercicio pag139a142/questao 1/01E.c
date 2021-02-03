#include <stdio.h>

int main(){
    int A[10], B[10], C[20], i;
    for (i = 0; i<= 9; i++){
        printf("Digite A%d: ", i+1); scanf("%d",&A[i]);
    }
    for (i = 0; i<= 9; i++){
		printf("Digite B%d: ", i+1); scanf("%d",&B[i]);
    }
    for (i = 0; i<= 19; i++){
        if(i<10){
            C[i] = A[i];
        }
        else{
            C[i] = B[i-10];
        }

        }
    for (i = 0; i<= 19; i++){
        printf("C%d = %d.\n", i+1, C[i]);
    }
    system("pause");
    return 0;
}
