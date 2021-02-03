#include <stdio.h>

int main(){
    float A[6], B[6], C[6][2];
    int j, i;
    for (i = 0; i <= 5; i++){
        printf("Digite A%d: ", i+1); scanf("%f",&A[i]);
    }
    for (i = 0; i <= 5; i++){
        printf("Digite B%d: ", i+1); scanf("%f",&B[i]);
    }
    for (i=0; i<=1; i++){
        for (j = 0; j <= 5; j++){
            if (i == 0)
                C[j][i] = A[j] * 2;
            else
                C[j][i] = B[j] - 5;
        }
    }
    for (i=0; i<=1; i++){
        for (j = 0; j <= 5; j++){
            printf("C[%d][%d] = %f \n", j, i, C[j][i]);
        }
    }
    system("pause");
    return 0;
}
