#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10
#define ttm 101
void print(int *, int);

int main(){
	int vet[tam];
	srand(time(NULL));
	
	for(int i = 0; i < tam; i++){
    		*(vet + i) = rand() % ttm;
	}
	
	puts("vetor não ordenado: ");
	print(vet, tam);
	printf("\n");
    
	for(int x = 0; x < tam-1; x++){
    		for(int i = 0; i < tam-1; i++){
        		if(*(vet + i) > *(vet + (i + 1))){
            		*(vet + (i + 1)) = *(vet + i) ^ *(vet + (i + 1));
            		*(vet + i) = *(vet + i) ^ *(vet + (i + 1));
            		*(vet + (i + 1)) = *(vet + i) ^ *(vet + (i + 1));
        		}
    		}
	}
    
    
	puts("vetor ordenado: ");
	print(vet, tam);
    

	return 0;
}

void print(int *x, int ta){
	for(int i = 0; i<ta; i++){
    		printf("%d ", *(x + i));
	}
}