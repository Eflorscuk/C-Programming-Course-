#include <stdio.h>

// Booleanos

/*
Não existe um tipo de dado Boolean, mas, a linguagem C reconhece o valor zero
como falso. E qualquer qualquer valor diferente de zero como true.
*/

int main() {
    int boolean = 0;

    if(boolean) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }
    return 0;
}