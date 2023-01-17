#include <stdio.h>

// Escrevendo funções
// main -> função principal de um programa em C
// Por exemplo, printf() é uma função da biblioteca <stdio.h>

//Estrutura das funções
/*
- Tipo de Retorno
- Nome
- Parâmetro de entrada (opcional)
- implementação
- retorno (opcional)
*/

void mensagem(){ // Tipo de retorno vazio, esta função não tem return, só executa algo
    printf("Bem-vindo");
}

int soma(int num1, int num2) {
    return num1 + num2;
}

void proximo_char(char caractere) {
    printf("%c\n", caractere+1);
}

int main() {
    printf("%d\n", soma(1, 2));
    proximo_char('a');
    mensagem();
    return 0; //Retorna para o sistema operacional, pois, para este, 0 é sucesso
}