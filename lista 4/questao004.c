#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

int main(){
    float vet[tam];
    srand(time(NULL));
    
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 10;
    }
    for(int i = 0; i < tam; i++){
        printf("%.2f [%p]\n", *(vet + i), vet + i);
    }
    return 0;
}

