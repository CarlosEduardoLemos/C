#include <stdio.h>

int main(void){
    float nota;
    float nota2;

    printf("Didite a primeira nota do aluno: ");
    scanf("%f", &nota);
    printf("Didite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    float result = (nota + nota2)/2;

    printf("%.2f\n", result);

    return 0;
}