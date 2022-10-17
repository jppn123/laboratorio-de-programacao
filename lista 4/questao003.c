#include <stdio.h>

int main(){
    int x, aux = 0, min;
    int *p = &x, *m = &min;
    
    while(x != 0){

        puts("digite um valor para x(digite 0 para parar):");
        scanf("%d", p);

        if(aux == 0){
            *m = x;
            aux++;
        }
        if(x < *m && x != 0){
            *m = x;
        }
        
    }
    
    printf("o menor é: %d\n", *m);
}
