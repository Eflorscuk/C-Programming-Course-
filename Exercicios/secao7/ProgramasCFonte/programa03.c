#include <stdio.h>

int main(){
    int arr[11];
    int arrRes[11];

    for(int i = 0; i <= 11; i++) {
        printf("%d Digite um valor: ", i + 1);
        scanf("%d", &arr[i]);
        arr[i] = arr[i] * arr[i];
    }

    for(int i = 0; i <= 11; i++) {
        printf("Resultado ==> %d\n", arr[i]);
    }

    return 0;
}