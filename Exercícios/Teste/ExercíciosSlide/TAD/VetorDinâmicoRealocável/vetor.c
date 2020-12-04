#ifndef _VETOR_C
#define _VETOR_C

#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

struct vetor{
    int n; //Número de elementos armazenados no vetor
    int v_dim; //Dimensão do vetor
    float* v; //ponteiro para o vetor de elementos
};
Vetor* cria_vetord(int dim){
    Vetor* aux;
    (Vetor*)realloc(aux,sizeof(Vetor*));
    aux->v_dim=dim;
    aux->n=0;
    return aux;
}
int insere_vetord(Vetor* vd, float x){
    vd->n+=1;
    vd->v[vd->n]=x;
    return 1;
}
int tamanho_vetord(Vetor* vd){
    return vd->n;
}
int acessa_vetord(Vetor* vd, int pos,float*v){
    vd->v[pos];
}
void libera_vetord(Vetor* vd){
    free(vd);
}

#endif