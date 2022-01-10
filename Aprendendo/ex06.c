#include <stdio.h>

int main(){
    int fatorial;
    int resposta = 1;

    printf("Digite um valor inteiro: ");
    scanf("%i", &fatorial);

    int num = fatorial;

    for (; fatorial >= 1; --fatorial){
        resposta *= fatorial;
        // resposta = resposta * fatorial;
    }
    
    printf("O fatorial de %i é: %i\n", num, resposta);

    return 0;
}
