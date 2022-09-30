#include <stdio.h>
#include <string.h>
#define tam 100

int main(){
    char str1[tam], str2[tam];
    
    puts("digite a primeira string");
    scanf("%[^\n]", str1);
    fflush(stdin);
    puts("digite a segunda string");
    scanf("%[^\n]", str2);
    fflush(stdin);
    
    
    strcat(str1, str2);

    printf("strings concatenadas: %s", str1);
    
    
    return 0;
}