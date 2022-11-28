#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define nt 5
#define rd 10

void preenchevet(int *, int , int );
void erroquad(int *, int *, int );
void print(int *, int );

int main(){
    srand(time(NULL));
    int *a = NULL, *b = NULL;
    a = malloc(nt * sizeof(int));
    b = malloc(nt * sizeof(int));

    preenchevet(a, nt, rd);
    preenchevet(b, nt, rd);
    puts("vetor 1: ");
    print(a, nt);
    puts("vetor 2: ");
    print(b, nt);
    erroquad(a, b, nt);
}

void preenchevet(int *vet, int t, int random){
    
    for(int i = 0; i< t; i++){
        *(vet + i) = rand() % random;
    }
}
void print(int *vet, int t){
    
    for(int i = 0; i< t; i++){
        printf("%d ", *(vet + i));
    }
    printf("\n");
}
    

void erroquad(int *v1, int *v2, int n){
    float sum = 0;
    float mse, rmse;
    for(int i = 0; i < n; i++){
        sum += (pow((*(v1 + i) - *(v2 + i)), 2.0));
        
    }
    mse = sum/n;
    rmse = pow(mse, 1.0/2.0);
    printf("mse: %.2f\n", mse);
    printf("rmse: %f\n", rmse);
     
}