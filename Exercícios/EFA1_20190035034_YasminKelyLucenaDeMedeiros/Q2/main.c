#include <stdio.h>
#include <stdlib.h>
#include "inteiros.h"

int main(){
    Inteiros* a3 = criarInteiros(NULL,1);
    Inteiros* a2 = criarInteiros(a3,2);
    Inteiros* a1 = criarInteiros(a2,2);
    
    Inteiros* b3 = criarInteiros(NULL,3);
    Inteiros* b2 = criarInteiros(b3,4);
    Inteiros* b1 = criarInteiros(b2,3);

    Inteiros* d3 = criarInteiros(NULL,1);
    Inteiros* d2 = criarInteiros(d3,2);
    Inteiros* d1 = criarInteiros(d2,2);
    
    Inteiros* c3 = criarInteiros(NULL,3);
    Inteiros* c2 = criarInteiros(c3,2);
    Inteiros* c1 = criarInteiros(c2,1);
    
    printf("Grupo A:\n");
    printInteiros(a1);
    
    printf("Grupo B:\n");
    printInteiros(b1);

    printf("O tamanho do grupo a é %d!\n", tamanho_inteiros(a1));
    printf("O tamanho do grupo b é %d!\n", tamanho_inteiros(b1));

    printf("O maior numero dentro do grupo a é %d!\n", maior_num(a1));
    printf("O maior numero dentro do grupo b é %d!\n", maior_num(b1));
     printf("O menor numero dentro do grupo a é %d!\n", menor_num(a1));
    printf("O menor numero dentro do grupo b é %d!\n", menor_num(b1));
    
    Inteiros* diferenca = diferenca_inteiros(a1,b1);
    printInteiros(diferenca);

    printf("\nInterseccao de Numeros\n");
    Inteiros* c = intersecao_inteiros(c1,d1);
    printInteiros(c);

    printf("\nUnião de Numeros\n");
    Inteiros* d = uniaoInteiros(a1,b1);
    printInteiros(d);

    Inteiros* vazio = conjunto_vazio();
    if(e_vazio_inteiro(vazio)==1){
        printf("\nVazio é um conjunto vazio!\n");
    }

    if(pertence_num(a1,1)){
        printf("O numero 1 pertence ao grupo 1\n");
    }

    remove_num(a1,1);

    if(!pertence_num(a1,1)){
        printf("O numero 1 não pertence ao grupo 1\n");
    }
    return 0;
}