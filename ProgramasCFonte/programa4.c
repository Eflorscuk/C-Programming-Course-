#include <stdio.h>

// While

/*
Utilizado quando você precisa de um loop quando não se tem um número
fixo de elementos, mas, que tenha um critério de parada.

Problema:
Faça um programa, no qual receba e some os números inteiros até que o 
0 seja o número para sair do programa e mostrar o resultado da soma de
todos os números
*/

int main() {
    int numero, soma = 0;

    while(numero != 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);
        soma+=numero;
    }

    printf("O resultado da soma é: %d", soma);

    return 0;
}