#include <stdio.h>

int main(){
    int x, n7 = 0;
    printf("digite um valor: ");
    scanf("%d", &x);
    while(x!=0){
        if(x%10 == 7){
            n7++;
        }
        x = x /10;
    }
    printf("existem %d numeros 7 no numero citado", n7);
    return 0;
}