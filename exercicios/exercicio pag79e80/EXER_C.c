#include <stdio.h>

// Victor Emanuel Sousa Lima - INF 1 16/01/2021
int main(){
    float n1, n2, n3, n4, exame, media;
    printf("Digite nota 1: "); scanf("%f", &n1);
    printf("Digite nota 2: "); scanf("%f", &n2);
    printf("Digite nota 3: "); scanf("%f", &n3);
    printf("Digite nota 4: "); scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    if (media >= 5)
        printf("Aluno aprovado com media %f.\n", media);
    else
        printf("Aluno reprovado com media %f.\n", media);
    system("pause");
    return 0;
}
