#include <stdio.h>
#define tam 100

int main(){
    char str1[tam], str2[tam], straux[tam+tam];
    int i = 0;
    puts("digite a primeira string");
    scanf("%[^\n]", str1);
    fflush(stdin);
    puts("digite a segunda string");
    scanf("%[^\n]", str2);
    fflush(stdin);

    //scaneia o final de str1 e começa a concatenar com str2 quando encontrar o espaço vazio de str1
    for(i; *(str1 + i)!='\0';i++){
        
    }
  
    for(int x = 0; *(str2 + x)!='\0'; i++, x++){
        
        *(str1 + i)=*(str2 + x);
        
    }
    *(str1 + i) = '\0';
    printf("string concatenada: %s", str1);
    return 0;
}