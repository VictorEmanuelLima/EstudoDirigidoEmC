#include <stdio.h>

int main(){
    int A[5][3], B[5][3], C[5][3],j, i;
    for (i = 0; i <= 4; i++){
        for (j=0; j<=2; j++){
            printf("Digite A[%d][%d]: ", i+1, j+1); scanf("%d",&A[i][j]);
        }

    }
    for (i = 0; i <= 4; i++){
        for (j=0; j<=2; j++){
            printf("Digite B[%d][%d]: ", i+1, j+1); scanf("%d",&B[i][j]);
        }

    }
    for (i = 0; i <= 4; i++){
        for (j=0; j<=2; j++){
            C[i][j] = A[i][j] + B[i][j];
        }

    }
    for (i = 0; i <= 4; i++){
        for (j=0; j<=2; j++){
            printf("C[%d][%d] = %d \n", i+1, j+1, C[i][j]);
        }

    }

    system("pause");
    return 0;
}
