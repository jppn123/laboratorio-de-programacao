#include <stdio.h>

int main(){
    int total = 0, x;
    float p = 0, r = 0, b = 0, n = 0;
    char aux;
    
    printf("-----votação-----\n");
    printf("5- paulo, 7- renata, 0- branco, outro numero será considerado voto nulo!\n");
    while(x >= 0){
        
        printf("digite seu voto: ");
        scanf("%d", &x);
        switch(x){
            case 5:
                printf("voto computado para paulo!\n");
                p++;
                total++; 
                break;
            case 7:
                printf("voto computado para renata!\n");
                r++;
                total++;
                break;
            case 0:
                printf("voto em branco!\n");
                b++;
                total++;
                break;
            default:
                if(x > 0){
                    printf("voto nulo!\n");
                    n++;
                    total++; 
                } 
                break;
        }
        if(x < 0){
            printf("votação encerrada!\n");
        }
        
        }
        r = r/total * 100;
        p = p/total * 100;
        b = b/total * 100;
        n= n/total * 100;
        printf("-----RESULTADO-----\ntotal de votos: %d\n", total);
        printf("renata: %.1f%%\npaulo: %.1f%%\nbranco: %.1f%%\nnulo: %.1f%%\n", r, p, b, n );
        


    return 0;
}