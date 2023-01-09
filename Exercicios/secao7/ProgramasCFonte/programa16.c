#include <stdio.h>

int main() {
    int cod = 0, arr[5];
    printf("Digite 5 números: \n");
    
    for(int i = 0; i < 5; i++) {
        printf("[%i]", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nDigite um código de 0 à 2:");
    scanf("%d", &cod);

    switch (cod) {
    case 0:
        printf("\nSaindo do programa");
        break;
    case 1:
        for(int i = 0; i < 5; i++) {
            printf("\n%d", arr[i]);
        }
        break;
    case 2:
        for(int i = 5; i >= 0; i--) {
            printf("\n%d", arr[i]);
        }
        break;
    default:
        printf("Código Inválido!");
        break;
    }
    printf("\nFIM");
    return 0;
}