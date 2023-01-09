#include <stdio.h>

int main() {
    int num[10], i, x, qtd = 0;

    for(i = 0; i<10; i++){
        printf("Digite o número:\n ");
        scanf("%d", &num[i]);
    }

    printf("Digite X: \n");
    scanf("%d", &x);
    printf("RESPOSTA:\n");

    for(i = 0; i < 10; i++){
        if(num[i] % x == 0){
            printf("%d\n", num[i]);
            qtd++;
        }
    }
    printf("Qtde = %d\n", qtd);
    return 0;
}