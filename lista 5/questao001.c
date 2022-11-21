#include <stdio.h>
#include <stdlib.h>

void soma(int, int, int *);
void multi(int, int, int *);

int main(int argc, char *argv[]){
    void (*pf[])() = {soma, multi};
    int val;
    int v1 , v2, op;

    v1 = atoi(argv[1]);
    v2 = atoi(argv[2]);
    op = atoi(argv[3]) - 1;

    (*pf[op])(v1, v2, &val);

    printf("resultado: %d\n", val);
    return 0;
}
void soma(int a, int b, int *c){
    *c = a + b;
}
void multi(int a, int b, int *c){
    *c = a * b;
}
