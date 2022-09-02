#include <stdio.h>

int main(){
    int x;
    printf("digite um numero inteiro: ");
    scanf("%d", &x);
    
    for(x == x; x%2 == 0; x){
        printf("par");
        break;
    }
    for(x == x; x%2 == 1; x){
        printf("impar");
        break;
    }
    return 0;
}