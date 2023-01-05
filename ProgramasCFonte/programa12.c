#include <stdio.h>

// Vetores - Parte 1
// Array unidimencional

int main() {
    // vetores e strings
    char nome[50];
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("\nOlá %s", nome);

    //vetores e caracteres
    char letras[26];
    int contador = 0;
    
    for(int i = 97; i <= 122; i++) {
        letras[contador] = i;
        contador++;
    }

    for(int i = 0; i <= 26; i++) {
        printf("Imprimindo as letras e seu valor em decimal\n");
        printf("%d == %c\n", letras[i], letras[i]);
    }
    
    return 0;
}