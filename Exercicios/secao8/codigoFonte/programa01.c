#include <stdio.h>

int twoTimes(int num);

int main() {
    int num = 2;
    printf("Response: %d", twoTimes(2));
    return 0;
}

int twoTimes(int num) {
    return num * 2;  
}