#include <stdio.h>

int main() {
    int arr[9], X, Y, soma = 0;

    for (int i = 0; i <= 9; i++) {
        printf("%d ==> digite um número: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Agora, digite um valor de índice do presente array entre 0 e 8: \n");
    scanf("%d", &X);
    while(X < 0 || X >= 9){
        printf("Valor inválido!!!");
        printf("Agora, digite um valor de índice do presente array entre 0 e 8: \n");
        scanf("%d", &X);
    }

    printf("Por fim, digite um valor de índice do presente array entre 0 e 8: \n");
    scanf("%d", &Y);
    while(Y < 0 || Y >= 9){
        printf("Valor inválido!!!");
        printf("Agora, digite um valor de índice do presente array entre 0 e 8: \n");
        scanf("%d", &Y);
    }

    printf("A soma dos dois elementos é: %d", soma = arr[X] + arr[Y]);

    return 0;
}