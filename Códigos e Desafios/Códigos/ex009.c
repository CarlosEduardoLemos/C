#include <stdio.h>

int main(){
    int i;

    printf("Digite um valor entre 1 e 5: ");
    scanf("%d", &i);

    switch (i){
        case 1:
            printf("Primeiro!\n");
            break;
        case 2:
            printf("Segundo!\n");
            break;
        case 3:
            printf("Terceiro!\n");
            break;
        case 4:
            printf("Quarto!\n");
            break;
        case 5:
            printf("Quinto!\n");
            break;
        default:
            printf("Opção Inválida!\n");
            break;
    }

    return 0;
}