#include <stdio.h>
#define tam 100
int main(){
    char c, str[tam];
    
    puts("digite uma string");
    fgets(str, tam, stdin);
    
    puts("digite o caractere a ser escaneado: ");
    scanf("%c", &c);

    for(int i = 0; str[i] != 0; i++){
        if(str[i] == c){
            puts("na string, há o caractere indicado");
            break;
        }
        else{
            puts("na string, não há o caractere indicado");
            break;
        }
    }
    

    return 0;
}