#include <stdio.h>
#include "pilha.h"


int main(){
    Pilha* p = pilha_cria ();
    printf("\n%s", pilha_vazia (p) == 0 ? "Pilha Vazia\n":"Pilha Não Vazia\n");
    pilha_push (p, 1.5);
    pilha_push (p, 1.3);
    pilha_push (p, 4.5);
    pilha_imprime(p);
    printf("Removido: %f\n",pilha_pop (p));
    printf("%s", pilha_vazia(p) == 0 ? "Pilha Vazia\n":"Pilha Não Vazia\n");
    pilha_imprime(p);
    pilha_libera(p);
}