#include <stdio.h>

// Constantes

#ifndef PI
    #define PI 3.1415
#endif

//ifndef - Diretiva de compilação
/*
* ifndef serve para verificar se determinada constante já foi definida
* nos arquivos.
*/

int main() {
    int valor = 5; // Variável
    valor = 467;
    printf("O valor é %d\n", valor);
    printf("PI vale %f", PI);
    return 0;
}