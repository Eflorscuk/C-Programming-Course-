#include <stdio.h>

void incrementa(int* contador){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*contador));
    printf("O endereço de memória é %d\n", contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*contador));
    printf("O endereço de memória é %d\n", contador);
}

int main(){
    //Quando declaramos uma variável, a linguagem C
    // aloca um espaço em memória para colocar
    // este valor

    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memória é d%\n", &contador);

    //cópia por valor
    incrementa(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memória é %d\n", &contador);    
    return 0;
}