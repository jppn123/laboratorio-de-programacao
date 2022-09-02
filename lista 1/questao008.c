#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("digite um valor inteiro: ");
    scanf("%d", &x);
    x = pow(x,2);
    printf("o valor ao quadrado é: %d", x);

    return 0;
}