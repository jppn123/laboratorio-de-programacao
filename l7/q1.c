#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int soma(int, int);

typedef struct coordenada {
    int x;
    int y;
}coordenada;

int main(){
    srand(time(NULL));
    coordenada *v = NULL;

    v = malloc(TAM * sizeof(coordenada));

    for(int i = 0; i < TAM; i++){
        (v + i) ->x = rand() % 10;
        (v + i) ->y = rand() % 10;
    }

    for(int i = 0; i < TAM; i++){
        printf("A soma da coordenada (%d,%d) é %d \n", (v + i) ->x, (v + i) ->y, soma((v + i) ->x, (v + i) ->y));
    }

    return 0;
}

int soma(int a, int b){
    return a + b;
}