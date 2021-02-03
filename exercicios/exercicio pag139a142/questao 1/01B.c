#include <stdio.h>

int main(){
    int A[8], B[8], i;
    for (i = 0; i<= 7; i++){
        printf("Digite A%d: ", i+1);
		scanf("%d",&A[i]);
		B[i] = A[i] * 3;
    }
    for (i = 0; i<= 7; i++){
        printf("B%d = %d.\n", i+1, B[i]);
    }
    system("pause");
    return 0;
}
