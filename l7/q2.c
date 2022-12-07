#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MAX 100

typedef struct vetInfo {
  int *end;
  int tamanho;
  int maior;
}vetInfo;

int verificaMaior(int *, int);
void preencheVetor(int *, int, int);
void printaVetor(int *, int);

int main(){
  srand(time(NULL));
  vetInfo info;

  int *vetor = NULL;
  vetor = malloc(TAM * sizeof(int));

  info.end = vetor;
  info.tamanho = TAM;

  preencheVetor(vetor, TAM, MAX);
  info.maior = verificaMaior(info.end, TAM);

  printaVetor(info.end, TAM);
  printf("Endereço: %p \n", info.end);
  printf("Tamanho: %d \n", info.tamanho);
  printf("Maior: %d \n", info.maior);


  return 0;
}

int verificaMaior(int *p, int tamanho){
    int maior;
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            maior = *(p+i);
        }
        else {
            if(*(p+i) > maior){
                maior = *(p+i);
            }
        }
    }
    return maior;
}

void preencheVetor(int *p, int tamanho, int maxVal){
    for(int i = 0; i < tamanho; i++){
        *(p+i) = rand() % maxVal;
    }
}

void printaVetor(int *p, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}