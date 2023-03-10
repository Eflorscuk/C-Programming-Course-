#include <stdio.h>

// Protótipo de funções servem para indicar para o main que as funções existem
/*
Assinaturas das funções
- tipo de retorno
- nome
- parâmetros de entrada (opcional)
*/

int soma(int num1, int num2);

void message();

int main(){
    int n1, n2, ret;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Infomrme o segundo número: ");
    scanf("%d", &n2);

    ret = soma(n1, n2);

    printf("A soma de %d com %d é %d", n1, n2, ret);
    message();
    return 0;
}

int soma(int num1, int num2) {
    return num1 + num2;
}

void message() {
    printf("\nFIM\n");
}