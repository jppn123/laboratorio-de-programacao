#include <stdio.h>
#define tam 100
int main(){
    char c, str[tam], *pc = &c;
    int cont = 0;
    puts("digite uma string");
    fgets(str, tam, stdin);
    
    puts("digite o caractere a ser escaneado: ");
    scanf("%c", pc);

    for(int i = 0; str[i] != 0; i++){
        if(*(str + i) == c){
            cont++;
        }
    }
    
    printf("na frase informada há %d caracteres %c", cont, c);

    return 0;
}