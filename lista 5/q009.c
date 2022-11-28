#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 3
#define ran 10

void preenchemat(int *, int , int , int );
void printmat(int *, int , int );
void impa(int *, int , int);

int main(){
    srand(time(NULL));
    int *m = NULL;
    
    m = malloc(tam * tam * sizeof(int));

    preenchemat(m, tam, tam, ran);
    puts("matriz: ");
    printmat(m, tam, tam);
    
    impa(m, tam, tam);
    
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

void impa(int *mat, int col, int lin){
    int soma = 0;
    for(int i = 0; i < lin * col; i += col + 1){
        
        soma += *(mat + i) ;
        
    }
    if(soma % 2 == 0){
        printf("a soma da diagonal é par!");
    }
    else{
        printf("a soma da diagonal é impar!");
    }
    
}
