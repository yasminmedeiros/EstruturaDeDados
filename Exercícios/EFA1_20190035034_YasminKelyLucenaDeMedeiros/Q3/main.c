#include <stdio.h>
#include "matriz.h"

int main(){

    Matriz *m1x1 = cria_matriz();
    Matriz *m1x2 = cria_matriz();
    Matriz *m2x1 = cria_matriz();




    print_matriz(m);
    if(atribui_matriz(m,0,1,2,NULL)==1){
        printf("\n");
        print_matriz(m);
    }
    if(atribui_matriz(m,0,0,5)==1){
        printf("\n");
        print_matriz(m);
    }
    if(atribui_matriz(m,1,1,4)==1){
        printf("\n");
        print_matriz(m);
    }
    printf("\nElemento 1x1: %d", acessa_matriz(m,1,1));
    printf("\n");
    printf("Removido com Sucesso? %d", remover_valor_matriz(m,1,1));
    printf("\n");
    print_matriz(m);
    remover_matriz(m);
    printf("Matriz Existe? %d\n",acessa_matriz(m,1,2));

    return 0;

}