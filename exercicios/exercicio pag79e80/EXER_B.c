#include <stdio.h>
#include <math.h>
// Victor Emanuel Sousa Lima - 16/01/2021
//ig: vic_lima.f.q
int main(){
    int A, B, C;
    float r1, r2, delta;
    printf("Digite A: "); scanf("%d", &A);
    printf("Digite B: "); scanf("%d", &B);
    printf("Digite C: "); scanf("%d", &C);
    if (A == 0){
        printf("Nao � uma equacao do segundo grau. \n");
	}
    else{
        delta = B * B - 4 * A * C;
        if (delta < 0){
            printf("Nao existe raizes reais para a equacao. \n");
        }
        else{
            if (delta == 0){
                r1 = -B/(2 * A);
                printf("A raize da equacao e %f \n", r1);
            }
            else{
                r1 = (-B + sqrt(delta)) / (2*A);
                r2 = (-B - sqrt(delta)) / (2*A);
                printf("As raizes da equacao sao %f e %f \n", r1, r2);
            }
        }

	}
    system("pause");
    return 0;
}
