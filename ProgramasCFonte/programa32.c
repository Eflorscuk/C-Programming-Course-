#include <stdio.h>
#include <string.h>
// Struct é uma estrutura de dados
// É uma estrutura de dados personalizada, será como um Objeto?

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[5];

int main() {
    for(int i = 0; i < 5; i++){
        printf("Informe a matrícula do aluno: ");
        fgets(alunos[i].matricula, 10, stdin);
        printf("Informe o nome do aluno: ");
        fgets(alunos[i].nome, 100, stdin);
        printf("Informe o curso: ");
        fgets(alunos[i].curso, 50, stdin);
        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
        getchar();
    }
    for(int i = 0; i < 5; i++){
        printf("\n==================== Dados dos Alunos %d ====================\n", i + 1);
        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
    }

    return 0;
}