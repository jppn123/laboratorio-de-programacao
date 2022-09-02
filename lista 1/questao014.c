#include <stdio.h>

int main(){
    float c, f;
    printf("digite a temperatura em c: ");
    scanf("%f", &c);
    f = (9*c + 160)/5;
    printf("o valor dessa temperatura em f é: %.1f", f);
    return 0;
}