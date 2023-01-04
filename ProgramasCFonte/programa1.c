// Aula sobre variáveis
#include <stdio.h>

int main() {
    // Declarando variáveis
    int idade;

    // Função para escrever algo na saída padrão (console)
    printf("Qual é a sua idade? ");

    // Recebe dados do teclado
    scanf("%d", &idade);

    // Saída
    printf("A sua idade é %d", idade);

    return 0;
}