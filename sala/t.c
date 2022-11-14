#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct matriz{
    int qtdLinhas;
    int qtdColunas;
    int maxVal;
    int *pDados;
};

void preencherMatriz(int *, int , int , int );
void printMatriz(int *, int , int );
void printDPrinc(int *, int);

int main(int argc, char *argv[]){
    struct matriz m;
    srand(time(NULL));
    if(argc != 4){
        printf("\tuse:\n\t\t%s <qtdLinhas> <qtdColunas> <maxVal>\n\n", argv[0]);
        exit(1);
    }

    m.qtdLinhas = atoi(argv[1]);; 
    m.qtdColunas = atoi(argv[2]);;
    m.maxVal = atoi(argv[3]);
    m.pDados = malloc(m.qtdColunas * m.qtdLinhas * sizeof(int));

    preencherMatriz(m.pDados, m.qtdColunas, m.qtdLinhas, m.maxVal);
    
    return 0;
}
void preencherMatriz(int *m, int col, int lin, int mv){
    for(int i = 0; i < lin *col; i++){
        *(m + i) = rand() % mv;
    }
    printMatriz(m, col, lin);
}
void printMatriz(int *m, int col, int lin){
    for(int x = 0; x < lin; x++){
        for(int i = 0; i < col; i++){
            printf("%d ", *(m + col * i + x));
        }
        printf("\n");
    }
}
void printDPrinc(int *m, int col){
    
    for(int i = 0; i < col; i++){
        printf("%d ", *(m + col * i));
    }
    
}
