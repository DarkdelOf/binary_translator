// version 0.1.0
// 1= release; 2= mark; 3= commit.

#include <stdio.h>                          //EXEMPLO A SEGUIR
#include "bintext.h"

int main(void) {
    char bin[BINTEXT_MAX_OUTPUT+1];
    char text[BINTEXT_MAX_INPUT+1];

    bin_encode("Oi mundo!", bin);
    printf("Bin: %s\n", bin);

    bin_to_text(bin, text);
    printf("Text: %s\n", text);

    return 0;
}