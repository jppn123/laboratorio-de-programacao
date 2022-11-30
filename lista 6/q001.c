#include <stdio.h>

struct aluno{
    float n1;
    float n2;
    float media;
};

int main(){
    struct aluno aln;

    puts("digite a nota 1: ");
    scanf("%f", &aln.n1);
    puts("digite a nota 2: ");
    scanf("%f", &aln.n2);

    aln.media = (aln.n1 + aln.n2) / 2;

    printf("media: %.2f", aln.media);


    return 0;
}
