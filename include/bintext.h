#ifndef BINTEXT_H
#define BINTEXT_H

#define BINTEXT_MAX_INPUT 2048
#define BINTEXT_MAX_OUTPUT (BINTEXT_MAX_INPUT * 9)

#include <stddef.h>   // size_t

#ifdef __cplusplus
extern "C" {
#endif

// Converte um valor binario em um valor codificado a partir do encoding do ambiente
int bin_decode(long long binary);

// Converte uma string ao equivalente binario em uma string
void bin_encode(const char *input, char *output);

// Converte, usando o bin_decode, bytes encadeados em uma string de texto
void bin_to_text(const char *entry, char *out);

#ifdef __cplusplus
}
#endif

#endif /* BINTEXT_H */