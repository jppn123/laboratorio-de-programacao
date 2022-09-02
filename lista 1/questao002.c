#include <stdio.h>
 
int main(){
   int x;
   printf("digite um numero inteiro: ");
   scanf("%d", &x);
   printf("valor escolhido: %d\n",x);
   printf("valor escolhido em hexadecimal: %x\n", x);
   printf("valor escolhido em octal: %o\n", x);
   return 0;
}
