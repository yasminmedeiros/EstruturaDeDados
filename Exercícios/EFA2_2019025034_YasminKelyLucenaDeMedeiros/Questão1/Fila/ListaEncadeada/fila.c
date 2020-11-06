#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct fila{
    int v;
    Fila* prox;
};

Fila* fila_cria (void ){
    Fila* f = (Fila*) malloc( sizeof (Fila));
    f-> dim = 4; 
    f-> vet = (float *) malloc(f-> dim*sizeof (float ));
    f->n = 0; 
    f-> ini = 0; 
    return f;
}