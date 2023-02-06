#include <stdio.h>
#include <stdlib.h>

// Calloc, quase não tem diferença com Malloc

/*
* Malloc - quando se aloca na memória, geralmente esta ainda possuí algum resíduo, não remove lixo da memória
* Calloc - zera o espaço em memória
*/

int main(){
    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    int bytes = qtd * sizeof(int);

    p = (int*)calloc(qtd, sizeof(int));

    // Antes de continuarmos, devemos verificar se existe memória disponível
    if(p){
        for(int i = 0; i < qtd; i++){
            printf("Informe um valor: ");
            scanf("%d", &p[i]);
        }
        
        for(int i = 0; i < qtd; i++) {
            printf("A variável 'numero[%d]' vale %d e ocupa %ld bytes em memórias.\n", i, p[i], sizeof(p[i]));
        }
        
        printf("O espaço de memória em números é %d bytes.\n", bytes);
    } else {
        printf("Erro: Memória insuficiente!");
    }

    // Liberar o espaço de memória
    free(p);
    p = NULL; // Medida de segurança
    printf("FIM!");
    return 0;
}