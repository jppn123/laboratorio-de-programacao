#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 100

void print(int x[], int ta);

int main(){
    int vet[tam];
    int i, j, min, aux;

	srand(time(NULL));

	for(int i = 0; i < tam; i++){
    	vet[i] = rand() % 101;
	}
    
	puts("vetor não ordenado: ");
	print(vet, tam);
	printf("\n");

    for (i = 0; i < tam -1; i++){
        min = i;
        for (j = (i+1); j < tam; j++) {
            if(vet[j] < vet[min]){
                min = j;
            }
            
        }
        if (vet[i] != vet[min]) {
            
            vet[i] = vet[i] ^ vet[min];
            vet[min] = vet[i] ^ vet[min];
            vet[i] = vet[i] ^ vet[min];
        }
    } 
    puts("vetor ordenado: ");
	print(vet, tam);
	printf("\n");
    return 0;
}

void print(int x[], int ta){
	for(int i = 0; i<ta; i++){
    	printf("%d ", x[i]);
	}
}
 