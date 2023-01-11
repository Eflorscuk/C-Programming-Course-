#include <stdio.h>

int main() {
    int arr[5], contador = 0;

    for (int i = 0; i <= 5; i++) {
        printf("%d ==> Escreva o primeiro valor: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= 5; i++) {
        if(arr[i] % 2 == 0) {
            contador++;
        }
    }

    printf("Existem %d valores pares\n", contador);
    
    return 0;
}