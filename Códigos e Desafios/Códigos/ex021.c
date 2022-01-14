#include <stdio.h>

int main(void){
    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar = 100.123456789;

    //Formatação variáveis inteiras
    printf("Variável inteira (%%d) = %7d\n", intVar2);
    printf("Variável inteira (%%i) = %i\n", intVar);
    printf("Variável inteira (%%x) = %x\n", intVar);
    printf("Variável inteira (%%o) = %o\n", intVar);
    printf("\n");

    //Formtação variáveis float e double
    printf("Variável double (%%f) = %.2f \n", doubleVar);
    printf("Variável double (%%e) = %e \n", doubleVar);
    printf("Variável double (%%g) = %g \n", doubleVar);
    printf("Variável double (%%a) = %a \n", doubleVar);
    printf("\n");

    system("pause");
    return 0;
}