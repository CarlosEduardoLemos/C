#include <stdio.h>

int main(){
    char nome[25];

    printf("Digite o nome: ");
    scanf("%s", &nome);

    printf("Olá %s. Seja bem vindo!\n", nome);

    return 0;
}
