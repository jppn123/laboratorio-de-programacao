#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 100

struct estoque{
    char nomepeca[tam];
    int npeca;
    float peca$;
    int npedido;
};

int main(){
    struct estoque *e1 = NULL;

    e1 = malloc(sizeof(struct estoque));
    
    puts("digite o nome da peça: ");
    fgets(e1->nomepeca, tam, stdin);
    
    puts("digite o numero da peça: ");
    scanf("%d", &e1 -> npeca);
    
    puts("digite o preço da peça: ");
    scanf("%f", &e1 -> peca$);

    puts("digite o numero do pedido: ");
    scanf("%d", &e1 -> npedido);

    printf("\nnome da peça: %snumero da peça: %d\npreço da peça: %.2f reais\nnumero do pedido: %d\n", e1->nomepeca, e1->npeca, e1 -> peca$, e1 -> npedido);
    return 0;
}

