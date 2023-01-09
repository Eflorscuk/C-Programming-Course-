#include <stdio.h>

int main() {
    int arr[10];
    printf("Digite 10 números: \n");
    for(int i = 0; i < 10; i++) {
        printf("[%i] => ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] < 0){
            arr[i] = 0;
        }
        printf("=> %d\n", arr[i]);
    }
    
    return 0;
}