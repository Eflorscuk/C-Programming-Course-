#include <stdio.h>

int main() {
    int num[20], aux, res[20];
    printf("Digite 20 números: \n");
    for(int i = 0; i < 20; i++) {
        printf("[%i]", i+1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 20; i++) {
        for(int k = i+1; k < 20; k++) {
            if(num[k] == num[i]){
                res[i] = num[i];
                printf("%d\n", res[i]); 
            }
        }
    }
    return 0;
}