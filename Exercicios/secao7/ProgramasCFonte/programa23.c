#include <stdio.h>

int main() { 
    int arr[5], arr2[5], i, produtoEscalar;

    for (i = 0; i < 5; i++) {
        arr[i] = i * 3;
        arr2[i] = i * 4;
    }

    for(i = 0; i < 5; i++) {
        produtoEscalar+=(arr[i] * arr2[i]);
    }

    printf("O resultado é: %d\n", produtoEscalar);
    return 0;
}