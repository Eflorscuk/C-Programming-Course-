#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O número é %d", num);
    printf("\nO endereço de memória é %p\n", &num);
    return 0;
}