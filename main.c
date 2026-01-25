#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bintext.h"

//funcoes utilizadas na main
void start_menu();
void function_menu();

void text_to_binary_menu();
void binary_to_text_menu();
void bin_decode_menu();

void clear_buffer();

int main() {
    start_menu();
    return 0;
}

// inicializacao do menu
void start_menu() {
    int option;

    do {
        printf("\n=====| BINARY TRANSLATOR |=====\n");
        printf("1 - Start program\n");
        printf("0 - Exit\n");
        printf("Option: ");
        scanf("%d", &option);
        clear_buffer();

        switch (option) {
            case 1:
                function_menu();
                break;

            case 0:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid option!\n");
        }
    } while (1);
}

//menu de opcoes de funcionabilidades
void function_menu() {
    int option;

    do {
        printf("\n=====| FUNCTION MENU |=====\n");
        printf("1 - Text to Binary\n");
        printf("2 - Binary to Text\n");
        printf("3 - Binary (8 bits) to Decimal\n");
        printf("0 - Back to Start Menu\n");
        printf("Option: ");
        scanf("%d", &option);
        clear_buffer();

        switch (option) {
            case 1:
                text_to_binary_menu();
                break;

            case 2:
                binary_to_text_menu();
                break;

            case 3:
                bin_decode_menu();
                break;

            case 0:
                return;

            default:
                printf("Invalid option!\n");
        }
    } while (1);
}

//texto para binario
void text_to_binary_menu() {
    char input[256],output[256 * 9 + 1];

    printf("\nEnter the text: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    bin_encode(input, output);

    printf("\nBinary output:\n%s\n", output);
    printf("\nPress ENTER to return...");
    getchar();
}

//binario para texto
void binary_to_text_menu() {
    char entry[1024];
    char out[256];

    printf("\nEnter the binary code (you may use spaces/new lines): ");
    fgets(entry, sizeof(entry), stdin);

    bin_to_text(entry, out);

    printf("\nDecoded text:\n%s\n", out);
    printf("\nPress ENTER to return...");
    getchar();
}

//binario para decimal
void bin_decode_menu() {
    long long binary;
    int decimal;

    printf("\nEnter an 8-bit binary number as digits (only 0/1).\n");
    printf("Binary: ");
    if (scanf("%lld", &binary) != 1) {
        clear_buffer();
        printf("Invalid input!\n");
        return;
    }
    clear_buffer();

    decimal = bin_decode(binary);
    printf("\nDecimal value: %d\n", decimal);

    if (decimal >= 32 && decimal <= 126) {
        printf("ASCII character: '%c'\n", (char)decimal);
    } else {
        printf("ASCII character: (non-printable)\n");
    }

    printf("\nPress ENTER to return...");
    getchar();
}

//limpar buffer
void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
