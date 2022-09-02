#include <stdio.h>
 
int main(){
   int x;
   printf("digite um valor: ");
   scanf("%d", &x);
   printf("valor escolhido: %d\n", x);
   printf("triplo do valor escolhido: %d\n", x * 3);
   printf("quadrado do valor escolhido: %d\n", x*x);
   printf("metade do valor escolhido: %d\n", x/2);
   return 0;
}
