#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5
#define random 10

void pr(int *, int , int );
void prt(int *, int );
float sum(int *, int );

struct ptrv{
    int *p;
    int qtd;
    float media;
};

int main(){
    srand(time(NULL));

    struct ptrv v;

    v.p = malloc(tam * sizeof(int));

    pr(v.p, tam, random);
    puts("vetor: ");
    prt(v.p, tam);

    v.qtd = tam;
    puts("media: ");
    v.media = sum(v.p, tam)/v.qtd;
    printf("%.2f", v.media);
}

void pr(int *vet, int t, int faixa){
    for(int i = 0; i < t; i++){
        *(vet + i) = rand() % faixa;
    }
}
void prt(int *vet, int t){
    for(int i = 0; i < t; i++){
        printf("%d ", *(vet + i));
    }
    puts("");
}
float sum(int *vet, int t){
    float sum = 0;
    for(int i = 0; i < t; i++){
        sum += *(vet + i);
    }
    return sum;
}