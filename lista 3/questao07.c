#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define tam 3
#define inter 20

int main(){
    int x[tam], axa = 0, axg = 1, t = 0;
    
    float ma, mg;
    srand(time(NULL));
    for(int i = 0; i<tam; i++){
        x[i] = rand() % inter;
    }
    for(int i = 0; i<tam; i++){
        axa += x[i];
        axg *= x[i];
        t++;
    }
    puts("vetor: ");
    for(int i = 0; i<tam; i++){
        printf("%d ", x[i]);
    }
    printf("\n");

    ma = (float)axa/t;
    mg = pow(axg, 1.0/t);

    printf("media aritmetica: %.2f\n", ma);
    printf("media geometrica: %.2f\n", mg);
    return 0;
}