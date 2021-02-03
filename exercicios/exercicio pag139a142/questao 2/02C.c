#include <stdio.h>

int main(){
    float A[4][5];
    int j, i;
    for (i = 0; i <= 3; i++){
        for (j=0; j<=4; j++){
            printf("Digite A[%d][%d]: ", i+1, j+1); scanf("%f",&A[i][j]);
        }

    }
    for (i = 0; i <= 3; i++){
        for (j=0; j<=4; j++){
            printf("A[%d][%d] = %f \n", i+1, j+1, A[i][j]);
        }

    }

    system("pause");
    return 0;
}
