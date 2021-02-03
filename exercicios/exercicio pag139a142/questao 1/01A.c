#include <stdio.h>

int main(){
    int n[10], i;
    for (i = 0; i<= 9; i++){
        printf("Digite o %do numero: ", i+1); 
		scanf("%d",&n[i]);
    }
    for (i = 0; i<= 9; i++){
        printf("O %do numero e %d.\n", i+1, n[i]);
    }
    system("pause");
    return 0;
}
