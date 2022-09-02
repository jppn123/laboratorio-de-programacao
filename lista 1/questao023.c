#include <stdio.h>

int main(){
    int x, num1, num2, num3;
    printf("digite um numero de 3 digitos: ");
    scanf("%d", &x, num1);
    num1 = x%10;
    x /= 10;
    num2 = x%10;
    x /= 10;
    num3 = x%10;
    x /= 10;
    printf("inverso do valor do numero: %d%d%d",num1, num2, num3);

    return 0;
}