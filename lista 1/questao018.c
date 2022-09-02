#include <stdio.h>

float pi = 3.14159;
int main(){
    float raio;
    printf("digite o valor do raio: ");
    scanf("%f", &raio);
    printf("o diâmetro do circulo é: %.3f\n", 2 * raio);
    printf("a área do circulo é: %.3f\n", pi * (raio * raio));
    printf("a circunferência do circulo é: %.3f\n", 2*raio*pi);

    return 0;
}