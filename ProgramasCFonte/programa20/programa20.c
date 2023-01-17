#include <stdio.h> // Arquivo de cabeçalho
#include "ajuda.h"

// Podemos criar nossas próprias bibliotecas

int main() {
    int n1, n2, rets, retm;

    mensagem();

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    rets = soma(n1, n2);
    printf("A soma de %d com %d é %d\n", n1, n2, rets);

    retm = mult(n1, n2);
    printf("A multiplicação de %d com %d é %d\n", n1, n2, retm);

    return 0;
}