#include <stdio.h>
//Victor Emanuel Sousa Lima - INF1 17/01/2021
int main(){
    int p, r, i;
    p = 0;
    while (p <= 9){
        if (p == 0)
            printf("%d^%d = %d\n", 3, p, 1);
        else{
            r = 1;
            for(i = 1; i <= p; i++){
                r *=  3;
            }
            printf("%d^%d = %d\n", 3, p, r);
        }
        p++;
    }
    system("pause");
    return 0;
}
