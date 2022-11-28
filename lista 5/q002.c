#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int *, int );
void ordem(int *, int );
void imprime(int *, int );

int main(int argc, char *argv[]){
    int *v = NULL;
    int tam = atoi(argv[1]);

    v = malloc(tam * sizeof(int));

    preenche(v, tam);
    ordem(v, tam);
    imprime(v, tam);

    printf("[%p] %d\n", (v + 0), *(v + 0));
    return 0;
}

void preenche(int *v, int t){
    srand(time(NULL));
    for(int i= 0; i < t; i++){
        *(v + i) = rand() % 100;
    }
}

void ordem(int *v, int t){
    for(int x = 0; x < t - 1; x++){
        for(int i = 0; i < t - 1; i++){
            if(*(v + i) > *(v + i + 1)){
                *(v + i) = *(v + i) ^ *(v + i + 1);
                *(v + i + 1) = *(v + i) ^ *(v + i + 1);
                *(v + i) = *(v + i) ^ *(v + i + 1);
            }
        }
        
    }
}

void imprime(int *v, int t){
    for(int i= 0; i < t; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
    
}