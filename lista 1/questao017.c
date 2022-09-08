#include <stdio.h>

int main(){
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);
    printf("valor do modulo: %d", ~x + 1);

    return 0;
}
