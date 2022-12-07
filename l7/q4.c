#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

typedef struct node{
    int x;
    struct node *prox;
}node;

void lista_encadeada(node *);

int main() {
    node a,b,c,d;
    
    a.x = 2;
    b.x = 3;
    c.x = 4;
    d.x = 1;

    a.prox = &b;
    b.prox = &c;
    c.prox = &d;
    d.prox = NULL;

   // printf("\n\na - %p b - %p c - %p d - %p\n\n", &a,&b,&c,&d);
   // printf("\n\na.prox - %p b.prox - %p c.prox - %p d.prox - %p\n\n", a.prox,b.prox,c.prox,d.prox);
    
    lista_encadeada(&a);
    return 0;    
}

void lista_encadeada(node *p){
    for(node *k=p;k!=NULL;k=k->prox){
        printf("%d ", k->x);
    }
}