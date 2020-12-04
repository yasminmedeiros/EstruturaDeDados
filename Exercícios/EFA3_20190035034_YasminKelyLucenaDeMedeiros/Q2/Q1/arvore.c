#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"

struct No{  
    int info;
    No* esq;
    No* dir;
};
struct Arvore{
    No* raiz;
};

No* criaNo (int info, No* esq , No* dir){
    No* p = (No*)malloc(sizeof(No));
    p->info = info;
    p->esq = esq;
    p->dir = dir;
    return p;

}
Arvore* criaArvore (No* r){
    Arvore* a = (Arvore*)malloc(sizeof(Arvore));
    a->raiz = r;
    return a;
}

int pares (Arvore* a){
    return noPar(a->raiz);
}
int noPar(No* r){
    int nParNo = 0;
    if(r->info % 2 ==0)
        nParNo+=1;
    noPar(r->esq);
    noPar(r->dir);
}