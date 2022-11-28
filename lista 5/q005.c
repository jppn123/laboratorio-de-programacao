#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(float *, int );

void imprime(float *, int );

int main(int argc, char *argv[]){
    float *v = NULL;
    int tam = atoi(argv[1]);
    float sum;

    v = malloc(tam * sizeof(float));

    preenche(v, tam);
    printf("\n");
    imprime(v, tam);
    printf("\n");

    for(int i = 0; i < tam; i++){
        sum += *(v + i);
    }
    printf("soma: %.2f", sum);
    return 0;
}

void preenche(float *v, int t){
    srand(time(NULL));
    for(int i= 0; i < t; i++){
        *(v + i) = ((float)rand() / (float)1000);
    }
}

void imprime(float *v, int t){
    for(int i= 0; i < t; i++){
        printf("%.2f ", *(v + i));
        
    }
    printf("\n");
    
}