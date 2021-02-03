#include <stdio.h>
//Victor Emanuel Sousa Lima - 17/01/2021
//ig: vic_lima.f.q
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
