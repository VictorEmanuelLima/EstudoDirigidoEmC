#include <stdio.h>
//Victor Emanuel Sousa Lima - INF1 17/01/2021
int main(){
    int n = 0;
    while(n <= 200){
        if (n%4 == 0)
            printf("%d\n", n);
        n++;
    }
    system("pause");
    return 0;
}
