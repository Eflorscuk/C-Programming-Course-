#include <stdio.h>

int main() {
    FILE *arq;

    //  fopen("nome do texto", forma-de-abertura-do-arquivo)
    //  w - abrir o arquivo para escrita
    //  r - não podemos escrever no arquivo, somenete para leitura, read.
    //  wa - abrir o arquivo para edição de escrita, se ele já existir, ele poderá adicionar conteúdo
    arq = fopen("arquivo.txt", "w"); // Se este arquivo não existir, ele será criado, se ele já existir, ele será sobreescrito

    // sempre que finalizarmos a manipulação de um arquivo, devemos fechá-lo.
    fclose(arq);

    return 0;
}