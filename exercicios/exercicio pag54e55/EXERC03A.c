#include <stdio.h>
//Victor Emanuel Sousa 2021 Lima ig: vic_lima.f.q
int main(){
    int n[4], adi[6], muti[6];
    printf("Digite o primeiro numero: ");
    scanf("%i", &n[1]);
    printf("Digite o segundo numero: ");
    scanf("%i", &n[2]);
    printf("Digite o terceiro numero: ");
    scanf("%i", &n[3]);
    printf("Digite o quarto numero: ");
    scanf("%i", &n[4]);
    // adi��o
    adi[1] = n[1] + n[2];
    adi[2] = n[1] + n[3];
    adi[3] = n[1] + n[4];
    adi[4] = n[2] + n[3];
    adi[5] = n[2] + n[4];
    adi[6] = n[3] + n[4];
    // Multiplica��o
    muti[1] = n[1] * n[2];
    muti[2] = n[1] * n[3];
    muti[3] = n[1] * n[4];
    muti[4] = n[2] * n[3];
    muti[5] = n[2] * n[4];
    muti[6] = n[3] * n[4];
    // adi��o
    printf("%i + %i = %i \n",n[1], n[2], adi[1]);
    printf("%i + %i = %i \n",n[1], n[3], adi[2]);
    printf("%i + %i = %i \n",n[1], n[4], adi[3]);
    printf("%i + %i = %i \n",n[2], n[3], adi[4]);
    printf("%i + %i = %i \n",n[2], n[4], adi[5]);
    printf("%i + %i = %i \n",n[3], n[4], adi[6]);
    // Multiplica��o
    printf("%i * %i = %i \n",n[1], n[2], muti[1]);
    printf("%i * %i = %i \n",n[1], n[3], muti[2]);
    printf("%i * %i = %i \n",n[1], n[4], muti[3]);
    printf("%i * %i = %i \n",n[2], n[3], muti[4]);
    printf("%i * %i = %i \n",n[2], n[4], muti[5]);
    printf("%i * %i = %i \n",n[3], n[4], muti[6]);
    system("pause");
    return 0;

}
