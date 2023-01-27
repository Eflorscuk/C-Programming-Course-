#include <stdio.h>
#include <string.h>

union pessoa{
    char nome[100]; //1 char = 1 byte => 1 * 100 => 100 bytes
    int idade; //4 bytes
    // Total = 104 bytes de memória que ocupam
};

// Quando se declara uma union, ela sempre vai ocupar e utiliza o espaço de memória da maior variável
// Ele vai sobreescrevendo o espaço de memória

int main() {
    union pessoa pes;

    strcpy(pes.nome, "Angelina Jolie");
    printf("Dados de %s\n", pes.nome); 

    pes.idade = 39;
    printf("Ela tem %d anos.\n", pes.idade);

    printf("Quanto a variável 'pes' ocupa de memória?\n");
    printf("%ld bytes de memória", sizeof(pes));

    printf("\nFIM!");

    /*
    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double outra_nota = 19.4;

    printf("Resposta => %d e ocupa %ld espaço de bytes na memória.\n", numero, sizeof(numero));
    printf("Resposta => %.2f e ocupa %ld espaço de bytes na memória.\n", nota, sizeof(nota));
    printf("Resposta => %c e ocupa %ld espaço de bytes na memória.\n", letra, sizeof(letra));
    printf("Resposta => %.2f e ocupa %ld espaço de bytes na memória.\n", outra_nota, sizeof(outra_nota));
    */
    return 0;
}