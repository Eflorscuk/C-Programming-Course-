#include <stdio.h>

int dia();
int mes();
int ano();

int main(){
    int d, m, a;
    
    d = dia();
    m = mes();
    while(d > 29 && m == 2){
        printf("Fevereiro não possui mais de 29 dias!\n");
        d = dia();
        m = mes();
    }
    a = ano();
    
    switch (m){
    case 1:
        printf("%d de Janeiro de %d\n", d, a);
        break;
    case 2:
        printf("%d de Fevereiro de %d\n", d, a);
        break;
    case 3:
        printf("%d de Março de %d\n", d, a);
        break;
    case 4:
        printf("%d de Abril de %d\n", d, a);
        break;
    case 5:
        printf("%d de Maio de %d\n", d, a);
        break;
    case 6:
        printf("%d de Junho de %d\n", d, a);
        break;
    case 7:
        printf("%d de Julho de %d\n", d, a);
        break;
    case 8:
        printf("%d de Agosto de %d\n", d, a);
        break;
    case 9:
        printf("%d de Setembro de %d\n", d, a);
        break;
    case 10:
        printf("%d de Outubro de %d\n", d, a);
        break;
    case 11:
        printf("%d de Novembro de %d\n", d, a);
        break;
    default:
        printf("%d de Dezembro de %d\n", d, a);
        break;
    }

    printf("FIM");
    return 0;
}

int ano(){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    return ano;
}

int mes(){
    int mes;
    printf("Digite um mês: ");
    scanf("%d", &mes);
    while(mes <= 0 || mes > 12){
        printf("Data inválida\n");
        printf("Digite um mês: ");
        scanf("%d", &mes);
    }
    return mes;
}

int dia(){
    int dia;
    printf("Digite um dia: ");
    scanf("%d", &dia);
    while(dia <= 0 || dia > 31) {
        printf("Data inválida\n");
        printf("Digite um dia: ");
        scanf("%d", &dia);
    }
    return dia;
}