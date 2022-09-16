#include <stdio.h>

int main(){
    int p = 110, j = 150, cont = 0;
    while(j >= p){
        p = p + 3;
        j = j + 2;
        cont += 1;
    }
    printf("serão necessários %d anos para pedro passar josé!", cont);


    return 0;
}