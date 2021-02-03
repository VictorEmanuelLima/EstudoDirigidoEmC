#include <stdio.h>
//Victor Emanuel Sousa Lima - INF1 17/01/2021
int main(){
    int n = 1, i=0;
    while(n <= 100){
        i += n;

        n++;
    }
    printf("%d\n",i);
    system("pause");
    return 0;
}
