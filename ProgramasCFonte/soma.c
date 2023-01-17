#include <stdio.h>

int soma(a, b) {
    int soma = 0;
    soma = a + b;
    return soma;
}

int main() {
    printf("%d", soma(1, 2));
    return 0;
}