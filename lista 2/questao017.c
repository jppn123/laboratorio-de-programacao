#include <stdio.h>

int main(){
    float f, c = 10;
    while(c <= 100){
        f = (c * 1.8) + 32;
        printf("em celsius %.0f, em fahrenheit %.1f\n", c, f);
        c += 10;
    }
    return 0;
}