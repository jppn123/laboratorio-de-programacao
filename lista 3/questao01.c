#include <stdio.h>
#define tam 15

int main(){
    float vet[tam], min, mai;
    int i;
    
    for(i = 0; i < tam; i++){
        printf("digite o %d° valor: \n", i + 1);
        scanf("%f", &vet[i]);
    }

    mai = vet[0];
    for(i = 0; i < tam; i++){
        if(vet[i] > mai){
            mai = vet[i];
        }
    }

    min = vet[0];
    for(i = 0; i < tam; i++){
        if(vet[i] < min){
            min = vet[i];
        }
    }

    printf("vetor gerado: ");
    for(i = 0; i < tam; i++){
        printf("%.0f ", vet[i]);
    }

    printf("\nmenor: %.1f\nmaior: %.1f\n", min, mai);
    printf("a soma do maior pelo menor é: %.1f\n", min + mai);

    return 0;
}