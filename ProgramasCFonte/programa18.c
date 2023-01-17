#include <stdio.h>

// aula 03 usando funções

// main -> principal

void mensagem() {
    printf("Bem-vindo!");
}

int soma(int num1, int num2) {
    return num1 + num2;
}

void proximo_char(char caractere) {
    printf("%c", caractere+1);
}

int main() {
    printf("Olá...\n");
    mensagem();
    int retorno = soma(4, 6);
    printf("Retorno = %d", retorno);
    return 0;
}