#include <stdio.h>
 
int main(){
    int h, min, sec, aux;
    printf("digite a quantidade de horas: ");
    scanf("%d", &h);
    printf("digite a quantidade de minutos: ");
    scanf("%d", &min);
    printf("digite a quantidade de segundos: ");
    scanf("%d", &sec);
    sec = sec + (min*60) + (h*3600);
    printf("o total de segundos: %d segundos", sec);
    return 0;
}
