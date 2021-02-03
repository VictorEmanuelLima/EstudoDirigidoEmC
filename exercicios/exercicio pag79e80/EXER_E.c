#include <stdio.h>

// Victor Emanuel Sousa Lima - INF 1 16/01/2021
int main(){
    float n1, n2;
    printf("Digite primeiro numero: "); scanf("%f", &n1);
    printf("Digite segundo numero: "); scanf("%f", &n2);

    if (n1 >= n2)
        printf("A diferenca e %f\n", (n1-n2));
    else
        printf("A diferenca e %f\n", (n2-n1));

    system("pause");
    return 0;
}
