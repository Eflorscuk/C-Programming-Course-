#include <stdio.h>

int main() {
    int num[10], contador = 0, soma = 0;

    printf("Informe 10 numeros reais:\n"); 
    for (int i = 0; i < 10; i++) {
        printf("N˚ %d\n", i);
        scanf("%d", &num[i]);
        if(num[i] < 0) {
            contador++;
        }
        if(num[i] >= 0) {
            soma+=num[i];
        }
    }

    printf("\n\n%d numeros negativos.\nSoma dos numeros positivos = %d.\n", contador, soma);
}