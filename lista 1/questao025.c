#include <stdio.h>

int main(){
    int sec, min, ho, aux;
    printf("digite a quantidade de segundos: ");
    scanf("%d", &sec);
    ho = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    aux = sec % 60;
    
    printf("%d horas %d minutos %d segundos", ho, min, aux);
    return 0;
}