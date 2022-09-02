#include <stdio.h>

int main(){
    int x, y;
    printf("digite o primeiro numero: ");
    scanf("%d", &x);
    printf("digite o segundo numero: ");
    scanf("%d", &y);
    printf("a soma deles é: %d\n", x + y);
    printf("o produto deles é: %d\n", x * y);
    printf("o quociente deles é: %d\n", x / y);
    printf("o resto da divisão deles é: %d\n", x % y);
    return 0;
}