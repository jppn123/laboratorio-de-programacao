#include <stdio.h>
#include <math.h>

int main(){
    int x[2], y[2];
    float d;
    printf("digite o valor de x1 e x2: \n");
    scanf("%d%d", &x[1], &x[2]);
    
    printf("digite o valor de y1 e y2: \n");
    scanf("%d%d", &y[1], &y[2]);

    printf("coordenadas escolhidas: (%d, %d) e (%d, %d)\n", x[1], y[1], x[2], y[2]);

    d = sqrt(pow(x[2]-x[1],2) + pow(y[2]-y[1],2));
    printf("a distancia entre os pontos é de: %.2f", d);
    
    return 0;
}