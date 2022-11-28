#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5
#define tamvalrand 10

void printavet(int *, int );
void mediana(int *, int );
void moda(int *, int , int );
void media(int *, int , int );

int main(){

    int *vet = NULL;
    vet = malloc(tam * sizeof(int));

    media(vet, tam, tamvalrand);
    moda(vet, tam, tamvalrand);
    mediana(vet, tam);
    
    return 0;
}

void printavet(int *v, int ta){
    for(int i = 0; i< ta; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
}

void media(int *v, int t, int tvr){
    srand(time(NULL));
    int soma = 0, rando, cont = 0;
    float media;

    //randomizar os valores do vetor e fazer sua media
    for(int i = 0; i< tam; i++){
        rando = rand() % tvr;
        *(v + i) = rando;
        soma += rando;
        cont++;
        
    }
    
    puts("vetor: ");
    printavet(v, tam);
    media = (float)soma/cont;
    printf("media: %.2f\n", media);
}

void mediana(int *v, int t){
    int pos1, pos2;
    float mediana;

    for(int i = 0; i<t-1;i++){
        for(int x = i + 1; x < t; x++){
            if(*(v + i) > *(v + x)){
                *(v + i) = *(v + i) ^ *(v + x);
                *(v + x) = *(v + i) ^ *(v + x);
                *(v + i) = *(v + i) ^ *(v + x);
            }
        }
    }
    
    if(t % 2 == 0){
        pos1 = *(v + (t/2) - 1);
        pos2 = *(v + (t/2));
        mediana = (float)(pos1 + pos2)/2;
    }
    else{
        pos1 = *(v + (t/2));
        mediana = pos1;
    }
   
    printf("mediana: %.2f\n", mediana);
}

void moda(int *v, int t, int tvr){
    int *control = NULL, moda;

    control = malloc(t * sizeof(int));

    for(int i = 0; i< t; i++){
        *(control + i) = 0;
    }
    
    for(int i = 0; i< t; i++){
        for(int z = i + 1; z < t; z ++){
            if(*(v + i) == *(v + z)){
                moda = *(v + i);
            } 
        }
                
    }
    if(moda > tvr){
        puts("não existe moda");
    }
    else{
        printf("moda: %d\n", moda);
    }
        
}