#include <stdio.h>
#include <stdlib.h>

#define tam 3

struct aluno{
    float n1;
    float n2;
    float media;
};

void media(struct aluno *, int );
void dados(struct aluno *, int );
void print(struct aluno *, int );

int main(){
    struct aluno *aln = NULL;

    aln = malloc(tam * sizeof(struct aluno));

    dados(aln, tam);
    media(aln, tam );
    print(aln, tam);
    
    return 0;
}
void dados(struct aluno *x, int t){
    for(int i = 0; i < t; i++){
        printf("digite a nota 1 do %d aluno: ", i + 1);
        scanf("%f", &(x + i)->n1);
        printf("digite a nota 2 do %d aluno: ", i + 1);
        scanf("%f", &(x + i)->n2);
        puts("");
    }
}

void media(struct aluno *x, int t){
    for(int i = 0; i < t; i++){
        (x+i)->media = ((x+i)->n1 + (x+i)->n2) / 2;
    }
}
void print(struct aluno *x, int t){
    float soma = 0;
    for(int i = 0; i < t; i++){
        printf("media do aluno %d: %.2f\n",i+1, (x + i)->media);
        soma += (x + i)->media;

    }
    printf("media geral: %.2f\n", soma/t);

}