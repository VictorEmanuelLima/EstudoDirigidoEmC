#include <stdio.h>
//Victor Emanuel Sousa Lima - INF1 17/01/2021
int main(){
    int n = 0, i;
    printf("Digite o numero da tabuada desejada: "); scanf("%d", &i);
    while(n <= 10){
        printf("%d x %d = %d\n", i, n, (n*i));
        n++;
    }
    system("pause");
    return 0;
}
