#include <stdio.h>

int main() {
    int arr[50], i;
    for(i = 0; i < 50; i++){
        arr[i] = (i + 5 * i)%(i+1);
    }
    printf("RESPOSTA:\n");
    for(i = 0; i < 50; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}