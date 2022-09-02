#include <stdio.h>

int main(){
    int a, b;
    printf("digite um valor para a: ");
    scanf("%d", &a);
    printf("digite um valor para b: ");
    scanf("%d", &b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("após a troca a = %d e b = %d", a, b);
    
    return 0;
}