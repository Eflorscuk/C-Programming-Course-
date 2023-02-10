#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
    // vetor temporário para o merge
    int temp[50];
    // variáveis aux
    int i, j, k;
    // início do primeiro grupo
    i = inicio1;
    // início do segundo grupo
    j = inicio2;
    k = 0;

    // Enquanto tiver elementos em ambos os grupos
    while(i <= fim1 && j <= fim2){
        //faz a ordenação de acordo com cada grupo
        if(vetor[i] < vetor[j]){
            temp[k++] = vetor[i++];
        } else{
            temp[k++] = vetor[j++];
        }
    }

    // Copiar os elementos restantes do primeiro grupo
    while(i <= fim1){
        temp[k++] = vetor[i++];
    }

    // Copiar os elementos restantes do segundo grupo
    while(j <= fim2){
        temp[k++] = vetor[j++];
    }

    // Transfere os elementos do vetor tem para o original
    for(i = inicio1, j = 0; i <= fim2; i++, j++){
        vetor[i] = temp[j];
    }
}

void merge_sort(int vetor[], int inicio, int fim){
    // Condição de parada da recurssão
    if(inicio < fim){
        //calcular o meio do vetor
        int meio = (inicio + fim) / 2;

        // recursão esquerda
        merge_sort(vetor, inicio, meio);

        // recursão direita
        merge_sort(vetor, meio + 1, fim);

        // Faz o merge (junta) com os dois grupos de vetores ordenados
        merge(vetor, inicio, meio, meio+1, fim);
    }
}

int main(){
    // Vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    // Função de ordenação
    // Vetor, inicio do vetor, final do vetor
    merge_sort(vetor, 0, 6 - 1);

    //Apresentar valor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}