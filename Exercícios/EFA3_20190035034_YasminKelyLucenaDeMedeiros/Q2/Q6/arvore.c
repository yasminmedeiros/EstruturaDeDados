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

int somatotal (Arvore* a, int x){
    int num = 0;
    soma(a->raiz,x,&num);
    return num;
}
void soma(No* r, int x, int* num){
    if(r!=NULL){
         if(r->info >x)
            *num+=1;
        soma(r->dir,x,num);
        soma(r->esq,x,num);
    }
}

