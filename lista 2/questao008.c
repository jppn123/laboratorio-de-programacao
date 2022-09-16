#include <stdio.h>

int main(){
    float merc, ent;
    int p;
    printf("informe o valor do produto: ");
    scanf("%f", &merc);
    p = merc/3;
    ent = merc - (2 * p); 
    printf("entrada: %.2f, parcelas de: %d",ent, p );

    return 0;
}