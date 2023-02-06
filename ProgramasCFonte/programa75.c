#include <stdio.h>

// Constantes

#ifndef PI
    #define PI 3.1415
#endif

//ifdef - Diretiva de compilação
/*
*   Se a constante estiver definida, execute o bloco
*/

int main() {
    int valor = 5; // Variável
    valor = 467;
    printf("O valor é %d\n", valor);
    printf("PI vale %f\n", PI);

    #ifdef PI
        printf("O valor de PI é %f\n", PI);
    #endif

    return 0;
}