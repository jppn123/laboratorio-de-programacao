#include <stdio.h>
 
int main(){
   int a, b, x = 0;
   printf("informe a e b espaçados: ");
   scanf("%d%d", &a, &b);
   if(a > b){
        for(int i = b; i <= a; i++){
            if(i%3 == 0){
                x++;
            }
        }
    }
    else if(b > a){
        for(int i = a; i <= b; i++){
            if(i%3 == 0){
                x++;
            }
        }
    }
   printf("existem %d numeros divisiveis por 3", x);
   return 0;
}