#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10


typedef struct coordenadas{
    int x;
    int y;
}coords;

coords * questao3 (coords *, int );
int preencherEstrutura (coords *, int );

int main() {
    srand(time(NULL));

    coords *vetor = NULL;

    vetor = malloc(TAM * sizeof(coords));

    preencherEstrutura(vetor, TAM);
    coords *endereco = questao3(vetor,TAM);

    printf("Menor distancia [%p] -> (%d,%d)",endereco, endereco->x, endereco->y);

    return 0;    
}

coords * questao3 (coords *v, int tamanho){
    int distancia;
    coords *endereco;
    for(int i=0;i<tamanho;i++){
        if (i==0){
            distancia = abs((v+i)->x - (v+i)->y);
            endereco = v + i;
        } else {
            if (distancia > abs((v+i)->x - (v+i)->y)){
                distancia = abs((v+i)->x - (v+i)->y);
                endereco = v + i;
            }
        }
    }
    return endereco;
}

int preencherEstrutura (coords *p, int tamanho){
    for(int i=0;i<tamanho;i++){
        (p+i)->x = rand()%10;
        (p+i)->y = rand()%10;
        printf("%d (%d,%d)\n", i+1, (p+i)->x, (p+i)->y);
    }
}