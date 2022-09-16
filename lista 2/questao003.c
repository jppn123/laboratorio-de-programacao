#include <stdio.h>
 
int fat(int x){
   if(x == 1 | x == 0){
       return 1;
   }
   else{
       return x * fat(x-1);
   }
}
int main(){
   int x;
   printf("digite um numero: ");
   scanf("%d",&x);
   printf("valor de %d!: %d\n", x, fat(x));
 
   return 0;
}
