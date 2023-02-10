#include <stdio.h>

int main(){
    // Vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    // Função de ordenação
    insert_sort(vetor, 6);

    //Apresentar valor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}