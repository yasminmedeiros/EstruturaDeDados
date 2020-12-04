#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"

struct no {  
    int info;
    No* esq;
    No* dir;
};
struct arvore{
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

int um_filho (Arvore* a){
    int num = 0;
    numFilhos(a->raiz,&num);
    return num;
}

void numFilhos(No* r, int* num){
    if(r!=NULL){
        if((r->dir == NULL && r->esq != NULL ) || (r->esq == NULL && r->dir != NULL ))
            *num+=1;
        numFilhos(r->dir,num);
        numFilhos(r->esq,num);
    }
}

