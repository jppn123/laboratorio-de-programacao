#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

void crescente(int *, int);
void decrescente(int *, int);
void print(int *, int);

int main(int argc, char *argv[]){
    void (*pFunc[])()= {crescente, decrescente};
    int *n = NULL;
    srand(time(NULL));

    n = malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        *(n + i) = rand() % 10;
    }
    
    if (argc!=2){
        printf("Uso:\n\t %s operação\n\n",*argv);
        exit(1);
    }

    int codigoOperacao = atoi(argv[1]);

    if(codigoOperacao > 1){
        printf("\n\toperação inválida\n\n");
        exit(2);
    }
    
    (*pFunc[codigoOperacao])(n, tam);
    
    return 0;
}
void print(int *v, int tama){
    for(int i = 0; i < tama; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
}
void crescente(int *v, int tama){
    puts("vetor desordenado: ");
    print(v, tama);
    for(int x = 0; x < tama-1; x++){
    	for(int i = 0; i < tama-1; i++){
        	if(*(v + i) > *(v + i + 1)){
        		*(v + i) = *(v + i) ^ *(v + i + 1);
                *(v + i + 1) = *(v + i) ^ *(v + i + 1);
                *(v + i) = *(v + i) ^ *(v + i + 1);
        	}
    	}
    }
    
    puts("vetor ordenado crescente:");
    print(v, tama);
}
void decrescente(int *v, int tama){
    puts("vetor desordenado: ");
    print(v, tama);
    for(int x = 0; x < tama-1; x++){
    	for(int i = 0; i < tama-1; i++){
        	if(*(v + i) < *(v + i + 1)){
        		*(v + i) = *(v + i) ^ *(v + i + 1);
                *(v + i + 1) = *(v + i) ^ *(v + i + 1);
                *(v + i) = *(v + i) ^ *(v + i + 1);
        	}
    	}
    }
    puts("vetor ordenado decrescente:");
    print(v, tama);
}
