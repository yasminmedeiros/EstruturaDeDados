#include <stdio.h>
#include "lista.h"

int main(){
    Matriz* a =  criarMatriz(2,2);
    int b = inserirValor(a, 1, 1, 1);
    printf("%d",retornarValor(a,1,1));
    apagarMatriz(a);
    return 0;
}