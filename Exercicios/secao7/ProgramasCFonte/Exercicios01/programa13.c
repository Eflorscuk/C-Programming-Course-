#include <stdio.h>

int main() {
    int arr[4], maior = 0, menor = 0, posMaior = 0, posMenor = 0;
    printf("Digite os números: \n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d˚ número", i);
        scanf("%d", &arr[i]);
        if(arr[i] > maior) {
            maior = arr[i];
            posMaior = i;
        }
        if(arr[i] < menor) {
            menor = arr[i];
            posMenor = i;
        }
    }
    printf("\nMaior: %d Posição: %d\n", maior, posMaior);
    printf("Menor: %d Posição: %d\n", menor, posMenor);
    return 0;
}