// version 0.0.3
// 1= release; 2= mark; 3= commit.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bin_uncode(long long binary){
    int sum = 0;
    int power = 1;

    while(binary > 0){
        sum += (binary % 10) * power;
        power <<= 1;
        binary /= 10;
    }

    return sum;
}

void bin_encode(char *input, char *output) {
    int tam = strlen(input), temp, i, j, k = 0;

    for(i=0; i<tam; i++) {
        for(j=7; j>=0; j--) {
            temp = (input[i] >> j) & 1; //calculo do bit 0 ou 1
            output[k] = temp + '0'; //transforma o numero em caractere
            k++;
        }
        output[k] = ' '; //espaço entre as letras pra facilitar leitura
        k++;
    }

    output[k] = '\0';
}

void code_to_text(const char *entry, char *out){
    char copy[200];
    strcpy(copy, entry);

    char *token = strtok(copy, " ");

    int i = 0;
    while(token){
        long long bin = strtoll(token, NULL, 10);
        out[i++] = (char) bin_uncode(bin);
        token = strtok(NULL, " ");
    }
    out[i] = '\0';
}


int main(){
    char input[200];
    char output[1600];

    fgets(input, sizeof(input), stdin);
    code_to_text(input, output);

    printf("%s\n", output);
}