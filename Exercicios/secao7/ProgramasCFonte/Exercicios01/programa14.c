#include <stdio.h>

int main(){
    int num[10], i = 0, k = 0, aux;

    printf("Digite 10 numeros:\n");

    for(i = 0; i < 10; i++){
        printf("[%i]", i+1);
        scanf("%d", &num[i]);
    }

    printf("\n\nNumeros repetidos:\n");

    for(i = 0; i < 10; i++){
        for(k = i+1; k < 10; k++){
            if(num[k] == num[i]){
                aux = num[i];
                printf("%d\n", aux);
            }
        }
    }
    return 0;
}