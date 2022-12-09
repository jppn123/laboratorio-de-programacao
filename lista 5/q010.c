#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pr(int *, int );
void prt(int *, int );
void mat(int *, int , int *, int *);

#define tam 5

int main(){
    int *v1 = NULL, *v2 = NULL, *m = NULL;
    
    v1 = malloc(tam * sizeof(int));
    v2 = malloc(tam * sizeof(int));

    m = malloc(tam * tam * sizeof(int));
    
    srand(time(NULL));
    pr(v1, tam);
    pr(v2, tam);
    puts("x: linha"); 
    prt(v1, tam);
    puts("y: coluna"); 
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
void mat(int *ma, int t, int *vet1, int *vet2){
    for(int i = 0; i < t; i++){
        for(int x = 0; x < t; x++){
            *(ma + i * t + x) = 0;
        }
    }
    
    for(int i = 0; i < t; i++){
       *(ma + *(vet1 + i) * t + *(vet2 + i)) += 1;
       //*(vet1 + i) == linha
       //*(vet2 + i) == coluna
    }

    puts("matriz: ");
    for(int i = 0; i < t; i++){
        for(int x = 0; x < t; x++){
            printf("%d ", *(ma + i * t + x));
        }
        puts("");
    }
}
