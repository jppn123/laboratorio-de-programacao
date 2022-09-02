#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z ,ma, mg, ax;
    printf("digite três numeros com casas decimais: \n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    ma = (x + y + z)/3;
    
    mg = pow( x * y * z, 1.0/3.0);
    

    printf("a media aritmetica dos valores é: %.2f e a media geométrica é: %.2f", ma, mg);

    return 0;
}