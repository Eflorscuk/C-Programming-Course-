#include <stdio.h>

// Trabalhando com strings

int main() {
    //como declara uma string
    char nome[50];
    printf("Qual é o seu nome? ");
    gets(nome); //Aviso que não é seguro usar gets()

    printf("Seu nome é %s", nome);
    return 0;
}