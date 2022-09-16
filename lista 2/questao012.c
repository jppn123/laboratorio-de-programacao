#include <stdio.h>

int main(){
    int x;
    printf("digite um valor inteiro: ");
    scanf("%d", &x);
    printf("tabuada do %d:\n", x);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, x, i*x);
        
    }

    return 0;
}