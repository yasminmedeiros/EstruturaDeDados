//.Implemente uma função que retorne a quantidade de folhas de uma árvore binária.

int folhas (Arv* a);

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

int folhas (Arv* a){
    return numFolhas(a->raiz);
}

int numFolhas(No* r){
    int num = 0;
    if(r->dir == NULL && r->esq != NULL){
        num+=1;
    numFolhas(r->dir);
    numFolhas(r->esq);
}

