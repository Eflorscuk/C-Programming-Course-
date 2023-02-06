#include <stdio.h>
// faz parte da expplicação do uso da biblioteca de stdio.h
// fflush limpa o buffer de memória.

int main(){
    int num1, num2, soma;

    printf("Informe o num1: ");
    fflush(stdout); //Resolver o bug com o windows + eclipse
    scanf("%d", &num1);
    printf("Informe o num2: ");
    fflush(stdout);
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resutado de %d + %d é %d", num1, num2, soma);
    printf("\nFIM!");
    return 0;
}