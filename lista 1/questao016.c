#include <stdio.h>

int main(){
    float valorha, horatrab, inss, salariobruto, salarioliquido;
    printf("digite o valor da hora aula: ");
    scanf("%f", &valorha);
    printf("digite quantidade de horas trabalhadas: ");
    scanf("%f", &horatrab);
    printf("digite o percentual do inss: ");
    scanf("%f", &inss);

    salariobruto = valorha * horatrab;
    inss = (inss / 100) * salariobruto;
    salarioliquido = salariobruto - inss;
    
    printf("salario bruto: %.2f reais, salario liquido: %.2f reais.", salariobruto, salarioliquido);

    return 0;
}