#include <stdio.h>

int main() {
    int idade;
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Você é de menor");
    }else if( idade > 18 && idade < 60){
        printf("Você é adulto.");
    }else{
        printf("Você é idoso");
    }
    printf("\nSua idade é %d", idade);

    return 0;
}