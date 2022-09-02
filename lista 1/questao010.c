#include <stdio.h>

int main(){
    float c, l, h;
    printf("digite o comprimento: ");
    scanf("%f", &c);
    printf("digite a largura: ");
    scanf("%f", &l);
    printf("digite a altura: ");
    scanf("%f", &h);
    printf("o volume é: %.2f", c * l * h);
    
    return 0;
}