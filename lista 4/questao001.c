#include <stdio.h>

void somar(int *p, int *x, int *s);

int main(){
    int x, y, soma;
    int *p1 = &x, *p2 = &y, *s = &soma;

    puts("digite um numero: ");
    scanf("%d", &x);
    puts("digite um numero: ");
    scanf("%d", &y);
    
    somar(p1, p2, s);
    
    printf("valor da soma: %d\n", *s);
    printf("endereço da soma: %p\n", s);   

    return 0;
}
void somar(int *p, int *x, int *s){
    *s = *p + *x;
}
