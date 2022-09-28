#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int bin(int n);

int main(){
    unsigned char x = 255;
    int armario, pos, sel, narm, totarm = 0, aux, aux1;
    srand(time(NULL));

    puts("selecione o número correspondente: ");
    do{
        puts("1- para ocupar armário");
        puts("2- para desocupar armário");
        puts("3- sair");
        scanf("%d", &sel);
        fflush(stdin);
        
        switch(sel){
            case 1:
                pos = rand() % 8;              
                armario = pow(2, pos);    
                totarm = totarm | armario;
                
                puts("armários: ");
                bin(totarm);
                
                
                if(totarm == x){
                    puts("todos os armários estão ocupados!");
                }
                
                
                break;
            case 2:
                pos = rand() % 8;
                puts("qual armario você deseja desocupar? [1 - 8]");
                scanf("%d", &narm);
                printf("desocupando o %d armario\n", narm);

                armario = pow(2, --narm);
                totarm = totarm & ~armario;
                
                puts("armários:");
                bin(totarm);
                
                if(totarm == 0){
                    puts("todos os armários estão desocupados!");
                }
                break;
            case 3: 
                puts("saindo\n");
                break;
            default:
                puts("numero não correspondente a nenhuma opção\n");
                break;
        }
        
    }while(sel != 3);

    return 0;
}

int bin(int n){
 int r;
 int i; 
 for(i = 7; i >= 0; i--) {
    r = n >> i;
    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
 printf("\n");
}