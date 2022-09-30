#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define tammatriz 3
#define randvalor 10   
 
int main(){
    int matriz[tammatriz][tammatriz], totalvalor = 0, t;
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

    puts("digite um valor a ser localizado: ");
    scanf("%d", &t);

    //localiza o valor solicitado pelo usuario
    for(int i = 0; i<tammatriz; i++){
        for(int x = 0; x < tammatriz; x++){
            if(matriz[i][x] == t){
                totalvalor++;
            }
        }
    }
    //printa o valor solicitado e a quantidade de vezes
    printf("o total de %d na matriz é: %d", t, totalvalor);
    return 0;
}
