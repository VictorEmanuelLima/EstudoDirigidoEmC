#include <stdio.h>

int main(){
    float A[4][4], B[4][4], C[4][4];
    int j, i;
    for (i = 0; i < 4; i++){
        for (j=0; j < 4; j++){
            printf("Digite A[%d][%d]: ", i, j); scanf("%f",&A[i][j]);
        }
    }
    for (i = 0; i < 4; i++){
        for (j=0; j < 4; j++){
            printf("Digite B[%d][%d]: ", i, j); scanf("%f",&B[i][j]);
        }
    }
    for (i=0; i< 4; i++){
        for (j = 0; j < 4; j++){
                C[i][j] = A[i][j] - B[i][j];
        }
    }
    for (i=0; i< 4; i++){
        for (j = 0; j < 4; j++){
            printf("C[%d][%d] = %f \n", i, j, C[i][j]);
        }
    }
    system("pause");
    return 0;
}
