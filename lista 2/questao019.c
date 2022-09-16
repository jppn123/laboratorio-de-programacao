#include <stdio.h>

int main(){
    
    float m, x, y, aux1 = 0, aux2 = 0;
    printf("digite a faixa em valores espaçados: ");
    scanf("%f%f", &x, &y);
    
    for(int i = x; i<=y; i++){
        aux1 += i;
        aux2 += 1;
    }
    m = aux1/aux2;
    printf("a media é: %.2f\n", m);
    return 0;
}