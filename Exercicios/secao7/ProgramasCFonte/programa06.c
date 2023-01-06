#include <stdio.h>

int main() {
    int nums[9], bigNum = 0;
    printf("Escreva dez números: ");
    for(int i = 0; i <= 9; i++) {
        printf("%d˚ número: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i <= 9; i++) {
        if(nums[i] > bigNum) {
            bigNum = nums[i];
        }
    }

    printf("O maior número é: %d", bigNum);
    return 0;
}