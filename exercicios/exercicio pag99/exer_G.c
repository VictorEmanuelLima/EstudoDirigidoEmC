#include <stdio.h>
//Victor Emanuel Sousa Lima - 17/01/2021
//ig: vic_lima.f.q
int main(){
    int n = 1, antes = 0, atual = 1;
    while(n <= 15){
        printf("%d\n", atual);
        atual += antes;
        antes = atual - antes;
        n++;
    }
    system("pause");
    return 0;
}
