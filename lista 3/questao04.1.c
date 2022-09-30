#include <stdio.h>
#include <string.h>
#define tam 100

int main(){
    char str1[tam], str2[tam];
    int comp;
    puts("digite a primeira string");
    fgets(str1, tam, stdin);
    puts("digite a segunda string");
    fgets(str2, tam, stdin);

    comp = strcmp(str1, str2);
    if(comp == 0){
        puts("as strings são iguais");
    }
    else{
        puts("as strings não são iguais");
    }
    
    return 0;
}