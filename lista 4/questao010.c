#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5

void print(int *, int);
int main(){
	int vet1[tam], vet2[tam];
    srand(time(NULL));
    for(int i = 0; i< tam; i++){
        *(vet1 + i) = rand() % tam;
    }
    for(int i = 0; i< tam; i++){
       
        for(int x = 0; x < tam; x++){
            if(vet2 == i){
                vet2[x] = x; 
            }
        }
    }
    
    print(vet2, tam);
	return 0;
}

void print(int *x, int ta){
	for(int i = 0; i<ta; i++){
    		printf("%d ", *(x + i));
	}
}