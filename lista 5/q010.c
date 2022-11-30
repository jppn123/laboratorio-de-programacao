#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 7

void pr(int *, int );
void prt(int *, int );

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

    for(int i = 0; i < tam; i++){
        for(int x = 0; x < tam; x++){
            m[i][x] = 0;
        }
    }
    
    for(int i = 0; i < tam; i++){
        m[*(v2 + i)][*(v1 + i)] += 1;
    }

    puts("matriz: ");
    for(int i = 0; i < tam; i++){
        for(int x = 0; x < tam; x++){
            printf("%d ", m[i][x]);
        }
        puts("");
    }
    
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