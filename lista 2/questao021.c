#include <stdio.h>

int main(){
    int x[4], y;
    printf("insira um valor que supostamente é um palindromo de 5 digitos: ");
    scanf("%d", &y);
    
    x[0] = y % 10;
    y = y/10;
    x[1] = y % 10;
    y = y/10;
    x[2]= y % 10;
    y = y/10;
    x[3]= y % 10;
    y = y/10;
    x[4]= y;

    if(x[0] == x[4] && x[1] == x[3]){
        printf("o valor inserido é um palindromo!");
    }
    else if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3] && x[3] == x[4]){
        printf("o valor inserido é um palindromo!");
    }
    else if(x[0] == x[4] && x[1] == x[2] && x[2] == x[3] ){
        printf("o valor inserido é um palindromo!");
    }

    return 0;
}