#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if (idade <= 5){
        printf("Bebê.\n");
    } else if (idade > 5 && idade <=10){
        printf("Criança.\n");
    } else if (idade > 10 && idade < 18){
        printf("Adolescente.\n");
    } else{
        printf("Adulto.\n");
    }
    
    
    return 0;
}