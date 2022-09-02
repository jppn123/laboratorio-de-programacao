#include <stdio.h>

int main(){
    int x, y;
    printf("digite um numero inteiro: ");
    scanf("%d", &x);
    printf("digite um numero inteiro: ");
    scanf("%d", &y);
    for(x == x; y%x == 0; x){
        printf("o segundo é multiplo do primeiro");
        break;
    }
    for(x == x; y%x == 1; x){
        printf("não é multiplo");
        break;
    }
    for(x == x; x%y == 0; x){
        printf("o primero é multiplo do segundo");
        break;
    }
    for(x == x; x%y == 1; x){
        printf("não é multiplo");
        break;
    }
    
    return 0;
}