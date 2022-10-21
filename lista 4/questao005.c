#include <stdio.h>

#define tam 100

int main(){
    char str[tam];
    int t, space = 0;
    puts("digite uma frase");
    fgets(str, tam, stdin);

    //contar apenas as letras da string sem espaços 
    for(t = 0; t < tam; t++){
        if(*(str + t) == ' '){
            space ++;
        }
        else if(*(str + t) == '\0'){
            t--;
            t -= space;
            break;
        }
    }
    
    printf("a string fornecida tem %d caracteres", t);
    return 0;
}
