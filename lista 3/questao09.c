#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define tammatriz 3
#define randvalor 100   
 
int main(){
    int matriz[tammatriz][tammatriz];
    srand(time(NULL));
    //randomiza os valores da matriz
    for(int i = 0; i<tammatriz; i++){
        for(int x = 0; x < tammatriz; x++){
            matriz[i][x] = rand() % randvalor;
        }
    }
    //printa matriz na tela
    puts("matriz: ");
    for(int i = 0; i<tammatriz; i++){
        for(int x = 0; x < tammatriz; x++){
            printf("%3d ", matriz[i][x]);
        }
        printf("\n");
    }
    puts("valores da diagonal principal: ");
    for(int i = 0; i<tammatriz; i++){
        printf("%d ", matriz[i][i]);
    }

   return 0;
}
