#include <stdio.h>

int main() {
    FILE *arq;
    char frutas[10];

    arq = fopen("frutas.txt", "a");

    if(arq){
        //se consegui criar um arquivo?
        printf("Informe uma fruta ou aperte 0 para sair: \n");
        fgets(frutas, 10, stdin); // stdin -> standart input
        while(frutas[0] != '0') {
            fputs(frutas, arq);
            printf("Informe uma fruta ou aperte 0 para sair: \n");
            fgets(frutas, 10, stdin); // stdin -> standart input
        }
    } else {
        printf("Não consegui criar o arquivo");
    }
    fclose(arq);
    printf("FIM");
    return 0;
}