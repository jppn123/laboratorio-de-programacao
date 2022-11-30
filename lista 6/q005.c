#include <stdio.h>
#include <stdlib.h>

#define tam 100

struct professor{
    char nome[tam];
};

struct disciplina{
    char nome[tam];
    struct professor *pd;
};

int main(){
    struct professor prof;
    struct disciplina *d = NULL;

    d = malloc(sizeof(struct disciplina));

    puts("digite o nome do professor: ");
    fgets(prof.nome, tam, stdin);

    puts("digite o nome da disciplina: ");
    fgets(d->nome, tam, stdin);

    d->pd = &prof;

    printf("\nProfessor: %sDisciplina: %s\n", d-> pd -> nome, d->nome);
    return 0;
}