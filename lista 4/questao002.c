#include <stdio.h>

int main(){
    int x, y;
    int *p1 = &x, *p2 = &y;

    puts("digite o valor de x: ");
    scanf("%d", &x);
    puts("digite o valor de y: ");
    scanf("%d", &y);

    *p1 = *p1 ^ *p2;
    *p2 = *p1 ^ *p2;
    *p1 = *p1 ^ *p2;
    
    puts("após a troca: ");

    printf("valor de x: %d\n", *p1);
    printf("valor de y: %d\n", *p2);
     

    return 0;
}
