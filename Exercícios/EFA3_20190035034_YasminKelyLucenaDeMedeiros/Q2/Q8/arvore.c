
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

int nfolhas_maiores  (Arvore* a, int x){
    return nfolhas(a->raiz, int x);
}

int nfolhas(No* r, int x){
    int num = 0;
    if(r!=NULL){
        if(r->info > x)
            num+=1;
        numFilhos(r->dir);
        numFilhos(r->esq);
    }
}
