#include <stdio.h>

int main() {
    int arr[50], i, x = 0, arr2[x];

    printf("Escreva um programa com 10 inteiros entre 0 e 50:\n");
    for (i = 0; i < 10; i++){
        printf("[%i] dígito:\n", i + 1);
        scanf("%d", &arr[i]);  
    }

    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 != 0) {
            x++;
            arr2[i] = arr[i];
            printf("RES: %d\n", arr2[i]);
        }
    }

}