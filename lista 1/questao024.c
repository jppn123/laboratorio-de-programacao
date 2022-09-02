#include <stdio.h>


int main(){
    int x, n;
   
    printf("digite um valor para x: ");
    scanf("%d", &x);
    printf("digite um valor para n: ");
    scanf("%d", &n);
    n = 1 << n;
    printf("o valor é: %d", x*n);
    
    return 0;
    
}