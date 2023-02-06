#include <stdio.h>

# define TAMFILA 10
// https://www.cs.usfca.edu/~galles/visualization/QueueArray.html

// Montar uma fila
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // Próximo a ser atendido
int tail = 0; // Último da fila

void lista_elementos(){
    printf("\n========Fila atual========");
    for(int i = 0; i < TAMFILA; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("\nTail: %d\n", tail);
    printf("\n\n");
}

void dequeue() {
    if(head < tail){
        fila[head] = 0;
        head++;
        lista_elementos();
    } else {
        printf("\nA fila está vazia\n");
    }
}

void enqueue() {
    int val;
    if(tail < TAMFILA){
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail++;
        lista_elementos();
    } else {
        printf("\nA fila está cheia\n");
    }
}

void clear(){
    for (int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}

int main() {
    int opcao = 0;
    do {
        printf("Selecione a opção: \n\n");
        printf("[1] - Inserir (enqueue): \n");
        printf("[2] - Remover (dequeue): \n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpa a fila: \n");
        printf("[-1] - Sair: \n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                enqueue();
                break;
            }
            case 2: {
                dequeue();
                break;
            }
            case 3: {
                lista_elementos();
                break;
            }
            case 4: {
                clear();
                break;
            }
            case -1: {
                break;
            }
            default: {
                printf("Opção inválida!");
            }
        }
    } while(opcao != -1);
    printf("FIM!");
    return 0;
}