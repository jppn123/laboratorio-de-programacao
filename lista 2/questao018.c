#include <stdio.h>
#include <math.h>

int main(){
    long long unsigned int g = 1, sum = 0;
    for(int i = 1; i <= 64; i++){
        sum += g;
        g *= 2;
    }
    printf("valor de graos: %llu", sum);
    return 0;
}