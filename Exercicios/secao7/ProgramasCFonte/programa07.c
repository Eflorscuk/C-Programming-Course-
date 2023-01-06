#include <stdio.h>

int main() {
    int nums[9], bigNum = 0, index = 0;

    printf("Escreva os 10 números: ");
    for (int i = 0; i <= 9; i++) {
        scanf("\n%d", &nums[i]);
    }

    for (int i = 0; i <= 9; i++) {
        if(nums[i] > bigNum) {
            bigNum = nums[i];
            index = i;
        }
    }
    
    printf("O maior número foi %d do índice %d", bigNum, index);

    return 0;
}