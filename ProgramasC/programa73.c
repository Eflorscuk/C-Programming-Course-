#include <stdio.h>
// Recursividade

// É o ato de uma função chamar a si mesma
// Necessário ter um critério de parada
// Em linguagens funcionais, como Elixir, não existe estruturas como for,
// são usadas recursividades!
/*
int contador = 1;

int main(){
    printf("=> %d\n", contador + 1);
    main();
    return 0;
}
*/

// Usado com fibonnaci, por exemplo

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n-2);
}

int main(){
    int qtd;

    printf("Informe o tamanho da seq fibonnaci: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        printf("%d\n", fib(i + 1));
    }

    return 0;
}
