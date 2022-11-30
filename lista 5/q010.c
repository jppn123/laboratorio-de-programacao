#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 7

void pr(int *, int );
void prt(int *, int );
void mat(int [tam][tam], int , int *, int *);

int main(){
    int *v1, *v2, m[tam][tam];

    v1 = malloc(tam * sizeof(int));
    v2 = malloc(tam * sizeof(int));
    
    srand(time(NULL));
    pr(v1, tam);
    pr(v2, tam);
    puts("x: "); //coluna
    prt(v1, tam);
    puts("y: "); //linha
    prt(v2, tam);

    mat(m, tam, v1, v2);
    
}

void pr(int *v, int t){
    for(int i = 0; i < t; i++){
        *(v + i) = rand() % t;
    }
}
void prt(int *v, int t){
    for(int i = 0; i < t; i++){
        printf("%d ", *(v + i));
    }
    puts("");
}
void mat(int ma[tam][tam], int t, int *vet1, int *vet2){
    for(int i = 0; i < t; i++){
        for(int x = 0; x < t; x++){
            ma[i][x] = 0;
        }
    }
    
    for(int i = 0; i < t; i++){
        ma[*(vet2 + i)][*(vet1 + i)] += 1;
    }

    puts("matriz: ");
    for(int i = 0; i < t; i++){
        for(int x = 0; x < t; x++){
            printf("%d ", ma[i][x]);
        }
        puts("");
    }
}
