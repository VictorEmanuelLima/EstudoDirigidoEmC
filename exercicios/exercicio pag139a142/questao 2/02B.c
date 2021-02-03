#include <stdio.h>

int main(){
    int A[7], B[7], C[7][2],j, i;
    for (i = 0; i <= 6; i++){
        printf("Digite A%d: ", i+1); scanf("%d",&A[i]);

    }
    for (i = 0; i <= 6; i++){
        printf("Digite B%d: ", i+1); scanf("%d",&B[i]);

    }
    for (j = 0; j <= 1; j++){
        for (i=0; i<=6; i++){
            if (j == 0)
                C[i][j] = A[i];
            else
                C[i][j] = B[i];
        }

    }
   for (j = 0; j <= 1; j++){
        for (i=0; i<=6; i++){
            printf("C[%d][%d] = %d \n", i+1, j+1, C[i][j]);
        }

    }

    system("pause");
    return 0;
}
