#include <stdio.h>

char ascii_translate(unsigned char ascii_code){
    return (char)ascii_code;
}

int main(){
    // TESTE
    char character = ascii_translate(174);
    printf("%c", character);
}