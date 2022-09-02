#include <stdio.h>
 
int main(){
    float altura;
    char sexo;  
    printf("informe seu sexo [m/f]: ");
    scanf("%s", &sexo);
    printf("informe sua altura: ");
    scanf("%f", &altura);
    if(sexo == 'm'){
        printf("seu peso ideal é: %.2f", 72.7 * altura - 58);
    }
    else if (sexo == 'f'){
        printf("seu peso ideal é: %.2f", 62.1 * altura - 44.7);
    }
    return 0;
}
