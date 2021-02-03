#include <stdio.h>
// Victor Emanuel Sousa Lima - INF 1 16/01/2021
int main(){
    int A, B, C;
    printf("Digite A: "); scanf("%d", &A);
    printf("Digite B: "); scanf("%d", &B);
    printf("Digite C: "); scanf("%d", &C);
    if ((A <= B) && (B <= C)){
        // OK
	}
    else{
        if (A > B){
            A = A + B;
            B = A - B;
            A = A - B;
        }
        if (A > C){
            A = A + C;
            C = A - C;
            A = A - C;
        }
        if (B > C){
            B = B + C;
            C = B - C;
            B = B - C;
        }

	}
    printf("%d - %d - %d \n", A, B, C);
    system("pause");
    return 0;
}
