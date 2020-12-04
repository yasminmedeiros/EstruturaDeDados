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

int soma_xy (Arvore* a, int x,int y){
    int num = 0;
    soma(a->raiz,x,y,&num);
    return num;
}
void soma(No* r, int x,int y, int* num){
    if(r!=NULL){
         if(r->info >x)
            *num+=r->info;
        soma(r->dir,x,y,num);
        soma(r->esq,x,y,num);
    }
}

