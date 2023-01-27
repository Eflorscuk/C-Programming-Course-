#include <stdio.h>

union numeros {
    int num1, num2, num3, num4, num5;
}n;

int main(){
    n.num1 = 5;
    n.num2 = 4;
    n.num3 = 3;
    n.num4 = 2;
    n.num5 = 1;

    printf("RESPOSTA => %d", n.num1);
    return 0;
}