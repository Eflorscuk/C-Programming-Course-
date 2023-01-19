#include <stdio.h>

int main() {
    /*    0   1   2   3   4
    *   ---------------------
    *   | 1 | 2 | 3 | 4 | 5 |
    *   ---------------------
    * 
    *   cada int = 4 bytes
    *   bit 0 ou 1
    *   byte conjunto de 0000 0001 etc.
    *   logo,
    *   um inteiro será
    *   0000 0000 0000 0000 0000 0000 0000 0001 valor[1]
    *   0000 0000 0000 0000 0000 0000 0000 0010 valor[2]
    * 
    */

    int valores[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }
    printf("O array valores possui %ld bytes\n", sizeof(valores));
    printf("*(valores) vale %d e endereço de memória é %d\n", *(valores), *(valores));

    printf("*(valores+1) vale %d e endereço de memória é %d\n", *(valores+1), *(valores+1));

    return 0;
}