#include <stdio.h>
#include <math.h>

int main(){
    int x;
    x = 3;
    for(int i = 0; i<8; i++){
        printf("%.0f ", pow(x, i));
    }

    return 0;
}