#include <stdio.h>

// Matrizes - Parte 1
// Array - multidimencionais
// Posso colocar, por exemplo, três nomes com char 50
// char nome[3][50]

/*
Exemplo
int numeros[5][5]

[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]

*/

int main() {
    // vetores e strings
    char nomes[3][50];
    for(int i=0; i < 3; i++) {
        printf("Qual é o seu nome? ");
        gets(nomes[i]);
    }
    for(int i=0; i<3; i++) {
        printf("\nOlá %s", nomes[i]);
    }
    
    return 0;
}