#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha{

    int n; //numero de elementos armazenados
    int dim; //dimensão do vetor
    float* vet; //vetor de elementos
};

Pilha* pilha_cria (void){
    Pilha* p = (Pilha*) malloc(sizeof (Pilha));
    p->dim = 2; 
    p->vet = (float *) malloc(p-> dim*sizeof (float ));
    p->n = 0; 
    return p;
}

void pilha_push (Pilha* p, float v){

    if (p->n == p->dim) { // aumentando a capacidade da pilha, caso esteja cheia
        p-> dim *= 2;
        p-> vet = (float *) realloc(p->vet, p-> dim*sizeof (float ));
    }
    p->vet[p->n++] = v; // insere elemento na próxima posição livre no topo
}

float pilha_pop (Pilha* p){
    float v = p->vet[--p->n]; // retirando elemento do topo
    return v;
}

int pilha_vazia (Pilha* p){
    return (p->n == 0);
}

void pilha_libera (Pilha* p){
    free(p->vet);
    free(p);
}
void pilha_imprime (Pilha* p){
    for (int i=p->n-1; i>=0; i--)
        printf("% f\n",p-> vet[i]);
}