#include <stdio.h>

int main() {
    int nums[5];
    printf("Digite seis números: ");
    
    for(int i = 0; i <= 5; i++) {
        printf("Digite o %d˚ número: ", i);
        scanf("%d", &nums[i]);
    }

    printf("A ordem inversa é: \n");
    for(int i = 5; i >= 0; i--) {
        printf("=> %d \n", nums[i]);
    }

    return 0;
}