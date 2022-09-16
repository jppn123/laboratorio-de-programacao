#include <stdio.h>

int main(){
    int x, aux;
    do{
        printf("digite um numero entre 1 e 7: ");
        scanf("%d", &x);
        aux = x;
        switch(aux){
            case 1:
            printf("domingo\n");
            break;
            case 2:
            printf("segunda\n");
            break;
            case 3:
            printf("terça\n");
            break;
            case 4:
            printf("quarta\n");
            break;
            case 5:
            printf("quinta\n");
            break;
            case 6:
            printf("sexta\n");
            break;
            case 7:
            printf("sabado\n");
            break;
            default:
            printf("numero de dia invalido!\n");
            break;
        }
        if(x == 0){

            break;
        }
        
    }while(x);
    
    


    return 0;
}