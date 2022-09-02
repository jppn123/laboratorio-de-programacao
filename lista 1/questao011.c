#include <stdio.h>

int main(){
    float dolar, real, quant_real;
    printf("insira o valor da cotação do dolar: ");
    scanf("%f",&dolar);
    printf("insira a quantidade de reais que será convertida: ");
    scanf("%f", &quant_real);
    real = quant_real/dolar;
    printf("com %.2f reais você consegue %.2f dolares", quant_real, real);
    
    return 0;
}