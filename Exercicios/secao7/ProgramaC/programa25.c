#include <stdio.h>

int main() {
    int arr[1000], i = 0;
    printf("RESULTADO:\n");
    while(i < 100) {
        if(i % 7 == 0) {
            printf("%d\n", i);

        }
        i++;
    }
    return 0;
}