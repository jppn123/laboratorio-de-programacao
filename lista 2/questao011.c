#include <stdio.h>
 
int main(){
   int a, b;
   printf("informe a e b espaçados: ");
   scanf("%d%d", &a, &b);
   printf("os valores multiplos de 4 entre %d e %d são: \n", a, b);
   if(a > b){
        for(int i = b; i <= a; i++){
            if(i%4 == 0){
                printf("%d ", i);
            }
        }
    }
    else if(b > a){
        for(int i = a; i <= b; i++){
            if(i%4 == 0){
                printf("%d ", i);
            }
        }
    }
   
   return 0;
}
