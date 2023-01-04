#include <stdio.h>
// Estruturas de repetição, for, while, do...while

/*
Faça um programa que receba e some 5 números.
*/

int main() {
    // variáveis
    int numero, soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numero);
        soma+=numero;
    }

    printf("\nO resulstado é: %d", soma);
    return 0;
}