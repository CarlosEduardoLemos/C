#include <stdio.h>

int main(){
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("O sucessor do número %d é %d. O antecessor do número %d é %d.\n", num, num+1, num, num-1);

    return 0;
}