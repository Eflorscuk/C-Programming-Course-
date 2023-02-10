#include <stdio.h>

void quick_sort(int vetor[], int tam){
    int i, j, grupo, troca;

    // Critério de parada da recursividade!
    if(tam < 2){
        return; // sai da função
    } else {
        grupo = vetor[tam/2];
    }

    //Fazendo um loop único se comportar como dois
    for(i = 0, j = tam - 1;; i++, j--){
        //Fazermos a movimentação dos elementos no vetor
        while(vetor[i] < grupo){
            i++;
        }

        // Fazemos a movimentação dos elementos no vetor
        while(grupo < vetor[j]){
            j--;
        }
        //Critério de para do loop
        if(i >= j){
            break;
        } else {
            //Onde ocorrem as trocas
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }
    //Usar a recursividade para ordernar os grupos
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam - i);
}

int main(){
    // Vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    // Função de ordenação
    quick_sort(vetor, 6);

    //Apresentar valor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}