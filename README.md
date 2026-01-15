# bintext

Biblioteca em C para conversão entre bytes e sua representação binária textual.

## Funcionalidades
**bin_encode**: Conversão de bytes → representação binária textual

**bin_decode**: Conversão de representação binária textual → valor numérico de bytes baseado no enconding do ambiente

**bin_to_text**: Conversão de valor numerico (bytes) → texto
- Parser tolerante a caracteres inválidos

## Observações
- A interpretação de caracteres depende do encoding do ambiente
- A biblioteca não é focada em otimização e sim no processo com strings, é um processo baseado em texto → texto

## Licença
**MIT**
