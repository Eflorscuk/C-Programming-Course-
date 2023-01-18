#include <stdio.h>

int isNeg(int num);
int ask();

int main() {
    int num, res;
    num = ask();
    res = isNeg(num);
    printf("Resposta %d",res);
    printf("\nFIM");
    return 0;
}

int isNeg(int num){
    if(num >= 1) {
        num = 1;
    } else if(num <= -1){
        num = -1;
    } else {
        num = 0;
    }
    return num;
}

int ask(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}