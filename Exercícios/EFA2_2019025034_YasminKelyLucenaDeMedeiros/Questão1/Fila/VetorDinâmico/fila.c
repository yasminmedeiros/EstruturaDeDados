#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct fila {
    int n;
    int ini;
    int dim;
    float* vet; 

};

Fila* fila_cria (void ){
    Fila* f = (Fila*) malloc( sizeof (Fila));
    f-> dim = 4; 
    f-> vet = (float *) malloc(f-> dim*sizeof (float ));
    f->n = 0; /∗ i n i c i a l i z a f i l a v a z i a ∗/
    f-> ini = 0; /∗ e s c o l h e uma p o s i ç ã o i n i c i a l ∗/
    return f;
}
void fila_insere (Fila* f, float v){

    int fim;

    if (f->n == f-> dim) {
        f-> dim *= 2;
        f-> vet = (float *) realloc(f->vet, f-> dim*sizeof (float ));
        if (f-> ini != 0)
        memmove(& f-> vet[f->dim -f-> ini], /∗ e nd e re ç o d e s t i n o ∗/
            &f-> vet[f-> ini], /∗ e nd e re ç o origem ∗/
            (f->n-f-> ini)* sizeof (float ) /∗ número de b y t e s ∗/
            );
    }
    fim = (f-> ini + f->n) % f-> dim;
    f-> vet[fim] = v;
    f->n++;
}
float fila_retira (Fila* f){
    float v;
    v = f-> vet[f-> ini]; /∗ r e t i r a e le me nto do i n í c i o ∗/
    f-> ini = (f-> ini + 1) % f-> dim;
    f->n--;
    return v;
}
int fila_vazia (Fila* f){
    return (f->n == 0);
}
void fila_libera (Fila* f){
    free(f-> vet);
    free(f);
}
