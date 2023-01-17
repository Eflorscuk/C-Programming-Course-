#include <stdio.h>

int main(){
    int arr[10], v1[5], v2[5], i;

    for (i = 0; i < 10; i++) {
        arr[i] = i * i;
        //printf("=> %d\n", arr[i]);
        if(arr[i] % 2 != 0) {
            v2[i] = arr[i];
            //printf("=> %d\n", v2[i]);
        } else {
            v1[i] = arr[i];
        }
    }

    printf("Resposta\n");

    i = 0;
    while(i  < 5) {
        printf("Pares ==> %d\n", v2[i]);
        i++;
    }
    i = 0;
    while(i < 5) {
        printf("Impares ==> %d\n", v1[i]);
        i++;
    }
    return 0;
}