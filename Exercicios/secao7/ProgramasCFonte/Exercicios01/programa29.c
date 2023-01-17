#include <stdio.h>

int main() {
    int arr[6], i = 0, somaPares = 0, somaImpares = 0;

    printf("Digite seis números inteiros:\n");
    for(i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n\nNúmeros pares:\n");
    for(i = 0; i < 6; i++){
        if(arr[i] % 2 == 0){
            printf("==> %d\n", arr[i]);
            somaPares+=arr[i];
        }
    }

    printf("\n\nNúmeros impares:\n");
    for(i = 0; i < 6; i++){
        if(arr[i] % 2 != 0) {
            printf("==> %d\n", arr[i]);
            somaImpares+=arr[i];
        } 
    }

    printf("\nA soma de todos os pares é: %d\n", somaPares);
    printf("A soma dos impares é: %d\n", somaImpares);
    printf("FIM");
    return 0;
}