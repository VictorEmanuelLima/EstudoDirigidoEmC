#include <stdio.h>
int main(){
    int A, B;

    printf("Digite A: ");
    scanf("%i", &A);
    printf("Digite B: ");
    scanf("%i", &B);

    A = A + B;
    B = A - B;
    A = A - B;

    printf("A = %i \nB = %i\n", A, B);
    system("pause");
    return 0;

}
