#include <stdio.h>

int main() {
    int arr[100], i = 0, j = 0;
    for(i = 0; i < 100; i++) {
        while(j % 7 == 0 || j % 10 == 7){
            j++;
        }
        arr[i]=j;
        j++;
    }
    printf("Resposta\n");
    for(i = 0; i < 100; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}