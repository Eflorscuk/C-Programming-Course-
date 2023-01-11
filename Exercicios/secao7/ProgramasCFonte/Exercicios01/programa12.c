#include <stdio.h>

int main() {
    int arr[4], maior = 0, menor = 0, media = 0, soma = 0;
    printf("Digite os valores:\n");
    for (int i = 0; i < 5; i++){
        printf("Digite o %d˚ valor: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if(arr[i] != 0) {
            maior = arr[i];
        }
        if(arr[i] < menor) {
            menor = arr[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        soma+=arr[i];
        if(i == 4) {
            media = soma / 2;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %d\n", media);
    return 0;
}