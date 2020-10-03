#ifndef _INTEIROS_C
#define _INTEIROS_C

#include "inteiros.h"
#include <stdio.h>
#include <stdlib.h>

struct inteiros{
    int info;
    struct Inteiros* inteiros;
};
Inteiros* criarInteiro(int info){
    Inteiros* aux = (Inteiros*) malloc(sizeof(Inteiros));
    if(aux){
        aux->info=info;
        aux->inteiros=NULL;
    }
    return aux;
}
Inteiros* uniaoInteiros(Inteiros* a,Inteiros* b){
    Inteiros* aux =  (Inteiros*) malloc(sizeof(Inteiros));
    if (a==NULL & b==NULL){
        printf("Valores Nulos de Entrada");
        return aux;
    }
    if(a==NULL){
        return b;
    }

    if(b==NULL){
        return a;
    }

    while(a!=NULL){
        aux->info = a->info;
        aux->inteiros = a->inteiros;
        aux = aux->inteiros;
    }

    return aux;
    
}
/*
Inteiros* conjunto_vazio();

int insere_num(Inteiros* a, int x);

int remove_num(Inteiros* a, int x);

Inteiros* intersecao_inteiros(Inteiros* a,Inteiros* b);

Inteiros* diferenca_inteiros(Inteiros* a,Inteiros* b);

int pertence_num(Inteiros* a, int x);

int maior_num(Inteiros* a);

int menor_num(Inteiros* a);

int igualdade_inteiros(Inteiros* a,Inteiros* b);

int tamanho_inteiros(Inteiros* a);

int e_vazio_inteiro(Inteiros* a);
*/
#endif