#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10


void imprimirVet(float *p, int t);
int main(){
    float vet[tam];
    srand(time(NULL));
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 10;
    }
    imprimirVet(vet, tam);
    return 0;
}
void imprimirVet(float *p, int t){
    for(int i = 0; i < t; i++){
        printf("[%p] %.2f\n", p + i, *(p + i));
    }
}
