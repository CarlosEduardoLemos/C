#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite 2 números inteiros: \n");
    scanf("%i %i", &num1, &num2);

    if (num2 == 0){
        printf("Divisão por 0 não permitido.\n");
    }else{
        float result = num1/num2;
        if (num1 % num2 == 0){
            printf("%i é divisivel por %i.\n", num1, num2);
            printf("%i / %i = %f\n", num1, num2, result);
        }else{
            printf("%i não é divisivel por %i.\n", num1, num2);
            printf("%i / %i = %f\n", num1, num2, result);
        }
        
    }

    return 0;   
}