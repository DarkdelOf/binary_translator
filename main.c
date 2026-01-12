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
    char output[200];

    fgets(input, sizeof(input), stdin);
    code_to_text(input, output);

    printf("%s\n", output);
}