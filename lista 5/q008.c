#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ran 10

void preenchemat(int *, int , int , int );
void printmat(int *, int , int );
void compbin(int *, int , int, int);

int main(){
    srand(time(NULL));
    int *m = NULL, t = 5, c, l;
    puts("digite o numero de colunas: ");
    scanf("%d", &c);
    puts("digite o numero de linhas: ");
    scanf("%d", &l);

    m = malloc(c * l * sizeof(int));

    preenchemat(m, c, l, ran);
    puts("matriz original: ");
    printmat(m, c, l);
    puts("matriz S(binaria): ");
    compbin(m, c, l, t);
}

void preenchemat(int *mat, int col, int lin, int random){
    for(int i = 0; i < col*lin; i++){
        *(mat + i) = rand() % random;
    }
}

void printmat(int *mat, int col, int lin){
    for(int i = 0; i < lin; i++){
        for(int x = 0; x < col; x++){
            printf("%d ", *(mat + col * i + x));
        }
        printf("\n");
    }
}

void compbin(int *mat, int col, int lin, int faixa){
    int *s;

    s = malloc(col * lin * sizeof(int));

    for(int i = 0; i < col * lin; i++){
        if(*(mat + i) > faixa){
            *(s + i) = 1;
        }
        else{
            *(s + i) = 0;
        }
    }
    printmat(s, col, lin);
}