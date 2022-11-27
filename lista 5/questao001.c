#include <stdio.h>
#include <stdlib.h>

void soma(int, int, int *);
void multi(int, int, int *);

int main(int argc, char *argv[]){
    void (*pf[])() = {soma, multi};
    int val;
    int v1 , v2, op;
    if(argc != 4){
        printf("use:\t\n\t%s <num1> <num2> <operação>\n\n", argv[0]);
        exit(1);
    }
        
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
