#include <stdio.h>
#define tam 100

int main(){
    char str1[tam], str2[tam];
    int cont = 0;
    puts("digite a primeira string");
    fgets(str1, tam, stdin);
    puts("digite a segunda string");
    fgets(str2, tam, stdin);
    

    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            cont ++;
        }
    } 
    if(cont > 0){
        puts("strings diferentes");

    }else{
        puts("strings iguais");
    }
    
    return 0;
}