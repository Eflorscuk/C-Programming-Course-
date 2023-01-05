#include <stdio.h>

int main() {
    int num1, num2;
    float res = 0;

    printf("Informe o num1: ");
    scanf("%d", &num1);

    printf("Informe o num2: ");
    scanf("%d", &num2);

    //Soma
    res = num1 + num2;
    printf("\nA soma é %d", (int)res);

    //Subtração
    res = num1 - num2;
    printf("\nA sub é %d", (int)res);

    // Multiplicação
    res = num1 * num2;
    printf("\nA multiplicação é %d", (int)res);

    // Divisão
    if(num2) {
        res = (float)num1 / (float)num2;
        printf("\nA divisão é %f", res);
    } else {
        printf("\nNão existe divisão por zero");
    }

    // Exponêncial
    res = num1 * num1;
    printf("\nO quadrado de %d é %d", num1, (int)res);

    // Módulo (verificar se o número é par)
    if(num1 % 2 == 0) {
        printf("\n%d é par", num1);
    } else {
        printf("\n%d é impar", num1);
    }

    printf("\nFIM");
    return 0;
}