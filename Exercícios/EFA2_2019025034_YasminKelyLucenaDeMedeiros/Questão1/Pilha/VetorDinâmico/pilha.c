#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha{

    int n; //numero de elementos armazenados
    int dim; //dimensão do vetor
    float * vet; //vetor de elementos
};

Pilha* pilha_cria (void){

    Pilha* p = (Pilha*) malloc(sizeof (Pilha));
    p-> dim = 2; /∗ dimensão i n i c i a l ∗/
    p-> vet = (float *) malloc(p-> dim*sizeof (float ));
    p->n = 0; 
    return p;
}

void pilha_push (Pilha* p, float v){

    if (p->n == p-> dim) { 
        p-> dim *= 2;
        p-> vet = (float *) realloc(p->vet, p-> dim*sizeof (float ));
    }
    p-> vet[p->n++] = v;
}

float pilha_pop (Pilha* p){
    float v = p-> vet[--p->n]; 
    return v;
}

int pilha_vazia (Pilha* p){
    return (p->n == 0);
}

void pilha_libera (Pilha* p){
    free(p-> vet);
    free(p);
}