#include <stdio.h>

int main() {
    int arr1[10], arr2[10], arr3[10], i;

    printf("RESPOSTA: \n");
    for (i = 0; i < 10; i++) {
        arr1[i] = i * 2;
        arr2[i] = i * 3;
    }

    for (i = 0; i < 10; i++){
        if(i % 2 == 0){
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr2[i];
        }
    }

    for (i = 0; i < 10; i++) {
        printf("=> %d\n", arr3[i]);
    }

    return 0;
}