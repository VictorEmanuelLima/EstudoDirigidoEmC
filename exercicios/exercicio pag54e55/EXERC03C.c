#include <stdio.h>
//Victor Emanuel Sousa 2021 Lima ig: vic_lima.f.q
int main(){
    float F, C;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("%f graus Celsius e igual a %f graus Fahrenheit.\n", C, F);
    system("pause");
    return 0;



}
