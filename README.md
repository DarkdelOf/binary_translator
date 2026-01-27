# 010101 bintext

![Language](https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c)
![License](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/status-active-success?style=for-the-badge)

> **Biblioteca em C para conversão eficiente entre bytes e sua representação binária textual.**

A `bintext` é uma ferramenta focada na manipulação de strings para tradução de dados brutos em representações legíveis de binário e vice-versa.

## 💻 Desenvolvido por

[![DarkdelOf](https://img.shields.io/badge/GitHub-DarkdelOf-181717?style=for-the-badge&logo=github)](https://github.com/DarkdelOf)
[![vvvvvdal](https://img.shields.io/badge/GitHub-vvvvvdal-181717?style=for-the-badge&logo=github)](https://github.com/vvvvvdal)
[![plusfrapp](https://img.shields.io/badge/GitHub-plusfrapp-181717?style=for-the-badge&logo=github)](https://github.com/plusfrapp)

## 📋 Funcionalidades

A biblioteca oferece três funções principais para manipulação de dados:

### 🔄 Conversão e Codificação
- **`bin_encode`**
  - Converte **Bytes** $\rightarrow$ **Representação Binária Textual**.
  - *Exemplo:* Transforma o byte `A` na string `"01000001"`.

- **`bin_decode`**
  - Converte **Representação Binária Textual** $\rightarrow$ **Valor Numérico (Bytes)**.
  - Baseado no encoding do ambiente atual.

- **`bin_to_text`**
  - Converte **Valor Numérico (Bytes)** $\rightarrow$ **Texto Legível**.
  - Inclui um **parser tolerante** que lida com caracteres inválidos sem quebrar a execução.

---

## ⚠️ Observações Importantes

Antes de utilizar, tenha em mente:

1.  **Dependência de Encoding:** A interpretação dos caracteres está atrelada ao encoding configurado no seu ambiente (SO/Compilador).
2.  **Foco em Texto:** Esta biblioteca não foi desenhada para micro-otimizações de performance de hardware, mas sim para a clareza e robustez no processo de conversão **texto $\leftrightarrow$ texto**.

---

## 🚀 Como Usar

*Como implementar e exemplo básico de uso:*

### 1. Clonar
```py
git clone https://github.com/DarkdelOf/binary_translator.git
cd binary_translator
```
### 2. Rodar
```c

#include <stdio.h>
#include "bintext.h"

int main() {
    // Seu código...
    return 0;
}
