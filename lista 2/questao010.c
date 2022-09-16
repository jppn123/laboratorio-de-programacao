#include <stdio.h>
 
int main(){
   int A = 90;
   printf("os valores multiplos de 4 entre 15 e 90 são: \n");
   for(int i = 15; i <= A; i++){
       if(i%4 == 0){
           printf("%d ", i);
       }
   }
   return 0;
}
