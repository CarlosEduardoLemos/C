#include <stdio.h>

int main(){
    int num1 = 32;
    int num2 = 3;
    int num3 = 10;
    int num4 = 6;

    int total;

    total = num1 + num2 * num3 / num4 - 5;

    printf("%d\n", total);

    return 0;
}