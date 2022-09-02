#include <stdio.h>

int main(){
    int valor;
    printf("digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("o antecessor é %d e o sucessor é %d", --valor, valor+1);

    return 0;
}