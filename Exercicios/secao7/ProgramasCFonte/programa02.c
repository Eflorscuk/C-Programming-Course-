#include <stdio.h>

int main(){
    int arr[7];

    for (int i = 0; i <= 7; i++) {
        printf("Digite um valor: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= 7; i++) {
        printf("Resultado %d\n", arr[i]);
    }

    return 0;
}