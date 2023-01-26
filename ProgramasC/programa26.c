#include <stdio.h>

int main() {
    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r"); // arq começa com valor atribuído null

    if(arq){
        printf("Encontrei o arquivo!\n");
        // uma das formas de abrir o arquivo é com while
        while((c = getc(arq)) != EOF){ // End of File
            printf("%c", c);
        }
    } else {
        printf("Não encontrei o arquivo!\n");
    }
}