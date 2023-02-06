#include <stdio.h>

#define TAMPILHA 10

// Pilha // Stack

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int topo = 0; // Indica onde vai entrar o próximo elemento

void push(){
    int val;
    printf("Informe o valor");
    scanf("%d", &val);
    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo++;
        lista_elementos();
    } else {
        printf("Pilha cheia");
    }
}

void lista_elementos(){
    printf("\n========Pilha Atual========\n");
    for(int i = 0; i < TAMPILHA; i++){
        printf("-");
        pritf("|%d|", pilha[i]);
        printf("-");
    }
    printf("Topo: %d\n", topo);
    printf("\n\n");
}

void pop() {
    if(topo >= 0){
        pilha[topo - 1] = 0; // Conforme a explicação a cima
        topo--;
        lista_elementos();
    } else {
        printf("A pilha já está vazia!");
    }
}

void clear() {
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
}

int main() {
    int opcao = 0;
    do {
        printf("Selecionar opção:\n\n");
        printf("[1] - Inserir (push):\n");
        printf("[2] - Remover (pop):\n");
        printf("[3] - Listar:\n");
        printf("[-1] - Sair:\n");
        printf("Opção:\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case -1:
            break;
        default:
            printf("Opção inválida!");
            break;
        }
    } while(opcao == -1);
    return 0;
}