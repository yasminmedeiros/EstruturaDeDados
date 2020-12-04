#include <stdio.h>
#include "matriz.h"

int main(){

    Matriz *m = cria_matriz(2,2);

    printf("%i", atribui_matriz(m,1,1,2));
    printf("\n");
    printf("%i", acessa_matriz(m,1,1));
    printf("\n");
    printf("%i", nlinhas(m));
    printf("\n");
    printf("%i", ncolunas(m));

    return 0;
}