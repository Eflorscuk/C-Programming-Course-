#include <stdio.h>
#include <string.h>
// Struct é uma estrutura de dados
// É uma estrutura de dados personalizada, será como um Objeto?

struct st_contato{
    char nome[100];
    char telefone[20];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[100];
}agenda;

int main() {
    for(int i = 0; i < 5; i++){
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);
        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);
        printf("Informe o email: ");
        fgets(agenda.contatos[i].email, 100, stdin);
        getchar();
    }
    for(int i = 0; i < 5; i++){
        printf("\n==================== Dados dos Agenda ====================\n");
        printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
        printf("Telefone: %s\n",  strtok(agenda.contatos[i].telefone, "\n"));
        printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n"));
    }

    return 0;
}