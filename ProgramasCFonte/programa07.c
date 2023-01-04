#include <stdio.h>

int main() {
    //inteiro
    int numero_inteiro; //7, 8, 9
    //int numero1, numero2;

    //reais
    float media, numero1, numero2; // 9.13, precisão de seis casas decimais
    double outra_media, nota3, nota4; // Precisão de 10 casas decimais 9.1234567890

    printf("Qual é a primeira nota? ");
    scanf("%f", &numero1);
    printf("Qual é a segunda nota? ");
    scanf("%f", &numero2);
    media = (numero1 + numero2)/2;
    printf("Sua média é %2f", media);

    printf("\n-------------------------");
    printf("\nTESTANDO O DOUBLE");
    printf("\nDigite a terceira nota? ");
    scanf("%lf", &nota3);
    printf("Digite a quarta nota?");
    scanf("%lf", &nota4);
    outra_media = (nota3 + nota4)/2;
    printf("Outra nota %lf", outra_media);

    

    

    return 0;
}