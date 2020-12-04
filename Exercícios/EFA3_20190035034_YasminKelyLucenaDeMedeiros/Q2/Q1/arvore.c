#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"

struct no{  
    int info;
    No* esq;
    No* dir;
};
struct arvore{
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
    int num = 0;
    noPar(a->raiz,&num);
    return num;
}

void noPar(No* r, int* num){
    if(r!=NULL){ 
        if(r->info % 2 ==0)
            *num = *num + 1;
        noPar(r->esq, num);
        noPar(r->dir,num);
    }
    
}