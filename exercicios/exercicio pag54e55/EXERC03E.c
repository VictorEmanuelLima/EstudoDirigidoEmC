#include <stdio.h>
int main(){
    float V, R, A;

    printf("Digite o raio da lata,(metros): ");
    scanf("%f", &R);
    printf("Digite a altura da lata,(metros): ");
    scanf("%f", &A);

    V = 3.14159 * R * R * A;

    printf("Volume = %f m�.\n", V);

    system("pause");
    return 0;
}
