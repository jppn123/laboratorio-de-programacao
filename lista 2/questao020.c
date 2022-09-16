#include <stdio.h>


int fat(int n){
    if(n == 0 | n == 1){
        return 1;
    }
    else if(n > 1){
        return n * fat(n-1);
    }
}
int main(){
    for(int i = 1; i <= 10; i++){
        if(i%3 == 0){
            printf("fatorial de %d é %d\n", i, fat(i));
        }
    }
    
    return 0;
}