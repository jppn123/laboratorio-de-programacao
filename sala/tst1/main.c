#include "print.h"

int main(){
    int a, b;
    printar();

    puts("digite o primeiro valor:");
    scanf("%d", &a);
    puts("digite o segundo valor:");
    scanf("%d", &b);

    somar(a,b); 

    return 0;
}