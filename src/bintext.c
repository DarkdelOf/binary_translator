#include "bintext.h"
#include <string.h>

int bin_decode(long long binary){
    int sum = 0;
    int power = 1;

    while(binary > 0){
        sum += (binary % 10) * power; // soma do ultimo bit binario inteiro
        power <<= 1; // move o 1 a esquerda, equivale a potencia de 2 aumentando
        binary /= 10; // remove o ultimo bit binario inteiro
    }
    return sum;
}

void bin_encode(const char *input, char *output) {
    size_t size = strlen(input);size_t k = 0;

    for(size_t i=0; i<size; i++) {
        for(int j=7; j>=0; j--) {
            output[k] = ((input[i] >> j) & 1) + '0'; // transforma o binario em caractere
            k++;
        }
        output[k] = ' '; // espaço entre as letras pra facilitar leitura
        k++;
    }
    output[k] = '\0';
}

void bin_to_text(const char *entry, char *out) {
    long long bin=0; int bits=0; int o=0;

    for (int i = 0; entry[i] != '\0'; i++) {
        if (entry[i] == '0' || entry[i] == '1') { // aceita apenas '1' ou '0' e ignora o resto
            bin = bin * 10 + (entry[i] - '0'); // adiciona o atual bit da string ao int bin
            bits++;
        }
        if (bits == 8) {
            int code = bin_decode(bin); // converte o byte em valor numerico
            out[o++] = (char)code; // converte o valor numerico em caractere a partir do encoding do ambiente
            bin = 0;
            bits = 0;
        }
    }
    out[o] = '\0'; // ao fim do loop, certifica de colocar \0 para fechar a string
}