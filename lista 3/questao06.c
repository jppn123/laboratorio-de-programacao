#include <stdio.h>
#include <string.h>
#define tam 100


int main(){
    char str[tam], straux[tam];
    int val;
    puts("digite uma string");
    scanf("%[^\n]", str);
    fflush(stdin);

    val =  strlen(str);
    for(val-=1; val>=0; val--){
        printf("%c", str[val]);
    }
    
    return 0;
}