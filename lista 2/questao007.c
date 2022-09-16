#include <stdio.h>
 
int main(){
   float x, y;
   printf("digite dois valores espaçados: ");
   scanf("%f%f", &x, &y);
 
   while(1){
       if(y==0){
           printf("digite dois valores espaçados: ");
           scanf("%f%f", &x, &y);
       }
       else{
           x = x/y;
           printf("valor da divisão: %.2f", x);
           break;
       }
   }
 
   return 0;
}
