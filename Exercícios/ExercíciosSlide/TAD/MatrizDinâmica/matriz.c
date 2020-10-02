#ifndef _LINKED_LIST_C
#define _LINKED_LIST_C

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz{
    int lin;
    int col;
    float *v;
};
/*
struct  matriz
{
    int lin;
    int col;
    float** v;
};
*/

Matriz* cria_matriz(int nl, int nc){
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
    if(matriz){
        matriz->col = nc;
        matriz->lin = nl;
        matriz->v = (float*) malloc(nl*nc*sizeof(float*));

    }
    return matriz;
}

void libera_matriz(Matriz* mat){
    free(mat);
}

int acessa_matriz(Matriz* mat,int i,int j){
    return mat->v[i*mat->col+j];

}

int atribui_matriz(Matriz* mat, int i, int j,float v){
    mat->v[i*mat->col+j] = v;
    return 1;
}
int nlinhas(Matriz * mat){
    return mat->lin;
}

int ncolunas(Matriz *mat){
    return mat->col;
}


#endif
