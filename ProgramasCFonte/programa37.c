#include <stdio.h>

// enum => enumeração

//Tipo de estrutura de dados com constantes que o usuário só possa escolher estes
//determinados valores

enum dia_das_semanas{
    segunda,
    terça,
    quarta,
    quinta,
    sexta,
    sábado,
    domingo
};

int main() {
    enum dia_das_semanas d1, d2;
    d1 = quinta;
    if(d1 == d2){
        printf("Os dias são iguais");
    } else {
        printf("Os dias não são iguais");
    }
    return 0;
}