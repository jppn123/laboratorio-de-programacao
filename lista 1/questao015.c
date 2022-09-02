#include <stdio.h>

float diaria = 50.25;
int main(){

    float dias, vtot, val_sem_acr;
    printf("digite a quantidade de dias trabalhados: ");
    scanf("%f", &dias);
    val_sem_acr = dias * diaria;

    if(dias > 10 && dias <= 20){
        vtot = val_sem_acr + 0.2 * val_sem_acr;
        printf("o valor que será depositado será de: %.2f", vtot - (0.1 * vtot));
    }
    else if (dias > 20){
        vtot = val_sem_acr + 0.3 * val_sem_acr;
        printf("o valor que será depositado será de: %.2f", vtot - (0.1 * vtot));
    }
    else{
        vtot = val_sem_acr;
        printf("o valor que será depositado será de: %.2f", vtot - (0.1 * vtot));
    }
    
    return 0;
}