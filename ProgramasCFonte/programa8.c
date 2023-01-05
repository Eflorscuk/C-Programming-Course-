#include <stdio.h>

/*
Tipos de dados

Tipos alfanuméricos:
    - Caracteres;
    - Strings*;

*Não existe tipo string em C

    Tudo que tiver em aspas duplas é uma string

    Tudo que tiver em aspas simples
*/

int main() {
    char opcao;

    printf("Informe uma opção: \n");
    printf("a - Saldo na conta \n");
    printf("b - Extrato da conta \n");
    printf("c - Limite da conta \n");
    scanf("%c", &opcao);

    switch (opcao){
    case 'a':
        printf("Seu saldo é...\n");
        break;
    case 'b':
        printf("Extrato da conta...\n");
        break;
    case 'c':
        printf("Limite da conta...\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }

    return 0;
}