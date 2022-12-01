#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define tam 100

struct estoque{
    char nomepeca [tam];
    int npeca;
    float preco;
    int npedido;
};

void print(struct estoque *, FILE *);

int main(){
    char control;
    FILE *f;
    struct estoque *stq = NULL;
    stq = malloc(sizeof(struct estoque));
    print(stq, f);
    

    return 0;
}

void print(struct estoque *x, FILE *z){
    char control;
    z = fopen("arquivo.txt", "a");

    while(1){
        printf("Gostaria de adicionar uma peça? [S/N]\n");
        scanf("%c", &control);
        

        if(toupper(control) == 'S'){
            printf("digite o nome da peça: ");
            scanf("%99[^\n]", x -> nomepeca);
            fflush(stdin);
            printf("digite o preço: ");
            scanf("%f", &x -> preco);
            
            fprintf(z,"%s %.2f\n", x ->nomepeca, x -> preco);
        }
        else if(toupper(control) == 'N'){
            break;
        }
        
    }

    fclose(z);
}
