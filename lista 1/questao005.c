#include <stdio.h>
 
int main(){
   float x;
   printf("digite o valor da conta: ");
   scanf("%f", &x);
   printf("o valor a ser pago é: %.2f\n", x + (x*0.1));
   return 0;
}
