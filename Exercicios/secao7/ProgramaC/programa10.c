#include <stdio.h>

int main() {
    int notas[14], soma = 0;
    float media = 0;
    printf("Escreva as notas: \n");
    for(int i = 0; i <= 14; i++) {
        printf("%d˚ notas:\n", i + 1);
        scanf("%d", &notas[i]);
        soma+=notas[i];
    }

    media = (float)soma/(float)14;

    printf("A media das notas foi: %f", media);

    return 0;
}