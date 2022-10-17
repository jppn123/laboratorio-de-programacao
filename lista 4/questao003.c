#include <stdio.h>

int main(){
    int x, aux = 0, min;
    int *p = &x, *m = &min;
    
    while(*p != 0){

        puts("digite um valor para x(digite 0 para parar):");
        scanf("%d", p);

        if(aux == 0){
            *m = *p;
            aux++;
        }
        if(*p < *m && *p != 0){
            *m = *p;
        }
        
    }
    
    printf("o menor é: %d\n", *m);
    return 0;
}
