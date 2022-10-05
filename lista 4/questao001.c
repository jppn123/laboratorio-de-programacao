#include <stdio.h>

int somar(int *p, int *x);

int main(){
    int x, y, soma;
    int *p1 = &x, *p2 = &y;

    puts("digite um numero: ");
    scanf("%d", &x);
    puts("digite um numero: ");
    scanf("%d", &y);
    
    soma = somar(p1, p2);
    printf("valor de x: %d\n", soma);
    printf("endereço de x: %p\n", &soma);   

    return 0;
}
int somar(int *p, int *x){
    return *p + *x;
}
