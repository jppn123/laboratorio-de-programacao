#include <stdio.h>
 
int main(){
   int x3 = 0, x5 = 0;
   
    for(int i = 0; i <= 200; i++){
        if(i <= 100 && i%3 == 0){
            x3++;
        }
        
        if(i >= 100 && i <= 200 && i%5 == 0){
            x5++;
        }
    }
    
    
   printf("existem %d numeros por 3 e %d numeros por 5", x3, x5);
   return 0;
}