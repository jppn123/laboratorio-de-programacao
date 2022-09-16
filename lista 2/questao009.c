#include <stdio.h>
 
int main(){
   int x = 0, y = 1, aux, n;
   for(int i = 1; i<=21;i++){
       if(i==1){
           aux = 1;
          
       }
       else{
           aux = x + y;
           x= y;
           y = aux; 
       }
      
       printf("%d ", aux);
      
   }
  
 
 
   return 0;
}
