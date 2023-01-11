#include <stdio.h>

int main() {
    int A[10], B[10], C[10], i;

    for(i = 0; i < 10; i++){
        A[i] = (i + 2) * 2;
        B[i] = (i + 2) * 2;
    }

    for(i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
        printf("RES: %d\n", C[i]);
    }

    return 0;
}