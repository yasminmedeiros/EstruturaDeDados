
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"

struct No {  
    int info;
    No* esq;
    No* dir;
};
struct Arvore{
    No* raiz;
};
No* criaNo (int info, No* esq , No* dir){
    No* p = (No*) malloc(sizeof(No));
    p->info = info;
    p->esq = esq;
    p->dir = dir;

    return p;

}
Arvore* criaArvore (No* r){
    Arvore* a = (Arvore*) malloc(sizeof(Arvore));
    a->raiz = r;
    return a;
}


int somatotal (Arvore* a, int x, int y){
    return nfolhas(a->raiz, x,y);
}


int soma(No* r, int x, int y){
    int num = 0;
    if(r!=NULL){
        if(r->info >y && r->info<x)
            num+=r->info;
        numFilhos(r->dir);
        numFilhos(r->esq);
    }
}
