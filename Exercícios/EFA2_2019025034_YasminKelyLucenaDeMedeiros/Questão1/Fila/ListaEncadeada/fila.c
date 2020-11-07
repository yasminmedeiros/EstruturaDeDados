#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct elemento{
    float info;
    Elemento* prox;
};
struct fila{
    Elemento* ini;
    Elemento* fim;
};

Fila* fila_cria(){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void fila_insere(Fila* f,float v){
    Elemento* a = (Elemento*) malloc (sizeof(Elemento)); //Criando elemento
    a->info = v; //Armazenando o elemento
    a->prox = NULL; //Próximo igual a NULL
    if(f->fim !=NULL)
        f->fim->prox = a;
    else
        f->ini = a;
    
    f->fim = a;
}

float fila_retira (Fila* f){
    Elemento* t = f->ini;
    float v = t->info;
    f->ini = t->prox;
    if(f->ini == NULL)
        f->fim = NULL;
    free(t);
    return v;
}

int fila_vazia(Fila* f){
    return (f->ini == NULL);
}

void fila_libera (Fila* f){
    Elemento* q = f->ini;
    while(q!=NULL){
        Elemento* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}

void fila_imprime (Fila* f){
   for ( Elemento* q=f->ini; q!= NULL; q=q->prox)
        printf("% f\n",q-> info);
}
