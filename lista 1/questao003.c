#include <stdio.h>
 
int main(){
   float x;
   printf("digite um valor real: ");
   scanf("%f", &x);
   printf("seu valor formatado é: %.1f\n", x);
   return 0;
}