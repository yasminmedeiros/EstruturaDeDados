#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct pilha{

    int n; //numero de elementos armazenados
    int dim; //dimensão do vetor
    float * vet; //vetor de elementos
};
struct listano {
    float info;
    ListaNo* prox;
};

Pilha* pilha_cria (void ){
    Pilha* p = (Pilha*) malloc(sizeof (Pilha));
    p-> prim = NULL;
    return p;
}

void pilha_push (Pilha* p, float v){
    ListaNo* n = ( ListaNo*) malloc(sizeof ( ListaNo ));
    n-> info = v;
    n-> prox = p-> prim;
    p-> prim = n;
}

float pilha_pop (Pilha* p){
    ListaNo* t = p-> prim;
    float v = t-> info;
    p-> prim = t-> prox;
    free(t);
    return v;
}

int pilha_vazia (Pilha* p){
    return (p-> prim == NULL );
}

void pilha_libera (Pilha* p){
    ListaNo* q = p-> prim;
    while (q!= NULL) {
        ListaNo* t = q-> prox;
        free(q);
        q = t;
    }
    free(p);
}
void pilha_imprime (Pilha* p){
    for (int i=p->n-1; i>=0; i--)
        printf("% f\n",p-> vet[i]);
}
void pilha_imprime (Pilha* p){
    for ( ListaNo* q=p-> prim; q!= NULL; q=q-> prox)
        printf("% f\n",q-> info);

}
