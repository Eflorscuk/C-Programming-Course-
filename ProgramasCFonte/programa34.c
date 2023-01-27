#include <stdio.h>

//typedef
// apelido ou redefinir tipos

int main() {
    typedef float nota;

    // declarando variáeis
    nota prova1 = 7.0;
    nota prova2 = 6.0;

    nota soma = prova1 + prova2;

    printf("A soma das notas é: %.2f\n", soma);

    printf("FIM!");

    return 0;
}