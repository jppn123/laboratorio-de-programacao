#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5
#define rn 100

void preenche(int *, int, int);
void imprimef(float *, int );
void imprimed(int *, int );
int min(int *, int );
int max(int *, int );
void x(int *, int , int, int );

int main(){
    srand(time(NULL));
    int *v;

    v = malloc(tam * sizeof(float));
    printf("\n");
    preenche(v, tam, rn);
    puts("vetor: ");
    imprimed(v, tam);
    printf("\n");
    x(v, min(v, tam) , max(v, tam), tam);
    printf("\n");

    return 0;
}

void imprimed(int *v, int t){
    for(int i= 0; i < t; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
    
}  
void imprimef(float *v, int t){
    for(int i= 0; i < t; i++){
        printf("%.2f ", *(v + i));
    }
    printf("\n");
    
}
void preenche(int *vet, int t, int random){
    for(int i = 0; i < t; i++){
        *(vet + i) = rand() % random;
    }
}
int min(int *vet, int t){
    int min = *(vet + 0);
    for(int i = 0; i < t; i++){
        if(*(vet + i) < min){
            min = *(vet + i);
        }
    }
    return min;
}
int max(int *vet, int t){
    int max = *(vet + 0);
    for(int i = 0; i < t; i++){
        if(*(vet + i) > max){
            max = *(vet + i);
        }
    }
    return max;
}
void x(int *vet, int min, int max, int t){
    float *xl;
    xl = malloc(t * sizeof(float));
    for(int i = 0; i < t; i++){
        *(xl + i) = ((float)(*(vet + i) - min) / (max - min)); 
    }
    puts("x': ");
    imprimef(xl, t);
}