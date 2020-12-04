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

int nivel (Arvore* a, int x){
    return identificando(a->raiz,x);
}
int identificando(No* r, int x){
    int esq,dir;
    //Se x for maior que o valor que está na raiz, logo ele estará na direita, caso não for, estará na esquerda.
    if(r!=NULL){
        if(r->info == x)
           return 0;
        else if (r->info > x) {
            esq = identificando(r->esq,x)+1;
            return esq;
        }else{
            dir = identificando(r->dir,x)+1;
            return dir;
        }
    
    }
}

