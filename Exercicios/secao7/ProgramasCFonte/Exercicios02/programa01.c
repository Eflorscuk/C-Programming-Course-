#include <stdio.h>

int main() {
    int arr[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++) {
            arr[i][j] = j * 2;
            printf("=> %d\n", arr[i][j]);
        }
    }


    return 0;
}