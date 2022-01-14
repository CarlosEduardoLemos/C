#include <stdio.h>

int variavelGlobal = 2;

int main(){

    void teste(void);

    printf("Global = %i\n", variavelGlobal);
    teste();
    teste();
    teste();

    return 0;
}

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavalLocalEstatica = 2;
    variavalLocalEstatica *= 2;

    printf("Local automática = %i\n", variavelLocalAutomatica);
    printf("Local Estatica = %i\n", variavalLocalEstatica);

    variavelGlobal *= 2; //Compottamento igual da varialvel local automática

    printf("Global = %i\n", variavelGlobal);
}