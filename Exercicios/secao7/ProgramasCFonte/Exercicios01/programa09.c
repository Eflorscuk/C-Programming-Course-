#include <stdio.h>

int main() {
    int nums[5];

    printf("Escreva 6 valores pares\n");
    for (int i = 0; i <= 5; i++) {
        printf("%d˚ número: ", i);
        scanf("%d", &nums[i]);
        while(nums[i] % 2 != 0) {
            printf("Número inválido, digite novamente: ");
            scanf("%d", &nums[i]);
        }
    }
    
    printf("Os números foram: ");
    for (int i = 5; i >= 0; i--){
        printf("\n=> %d\n", nums[i]);
    }

    return 0;
}