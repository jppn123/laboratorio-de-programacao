#include <stdio.h>

#define tam 100

int main(){
    char str[tam], strax[tam];
    
    puts("digite uma frase");
    fgets(str, tam, stdin);

    for(int i = 0; i< tam; i++){
        *(strax + i) = *(str + i);
    }

    printf("string: %scópia: %s",str, strax);

    return 0;
}
