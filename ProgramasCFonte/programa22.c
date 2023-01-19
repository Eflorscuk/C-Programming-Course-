#include <stdio.h>

int main(){
    int num;
    int* p; 
    printf("Digite um número: ");
    scanf("%d", &num);

    p = &num;
    printf("O número é %d", num);
    printf("\nO endereço de memória é %p\n", &num);
    printf("\nO endereço do ponteiro é %p\n", p);

    return 0;
}