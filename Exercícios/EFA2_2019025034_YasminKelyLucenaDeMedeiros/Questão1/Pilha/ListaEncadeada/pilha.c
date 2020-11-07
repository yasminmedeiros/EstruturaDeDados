#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha{
    ListaNo* topo;
};
struct listano {
    float info;
    ListaNo* prox;
};

Pilha* pilha_cria(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void pilha_push (Pilha* p, float v){
    ListaNo* n = (ListaNo*) malloc(sizeof(ListaNo));
    n->info = v;
    n->prox = p->topo;
    p->topo = n;
}

float pilha_pop (Pilha* p){
    ListaNo* t = p->topo;
    float v = t->info;
    p->topo = t->prox;
    free(t);
    return v;
}

int pilha_vazia (Pilha* p){
    return (p->topo == NULL );
}

void pilha_libera (Pilha* p){
    ListaNo* q = p->topo;
    while (q!= NULL) {
        ListaNo* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}
void pilha_imprime (Pilha* p){
    for ( ListaNo* q=p->topo; q!= NULL; q=q->prox)
        printf("% f\n",q->info);
}