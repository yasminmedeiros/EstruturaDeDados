#ifndef _LINKED_LIST_C
#define _LINKED_LIST_C

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz{
    int lin;
    int col;
    int *v;
};

Matriz* cria_matriz(int nl, int nc){
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
    if(matriz){
        matriz->col = nc;
        matriz->lin = nl;
        matriz->v = (int*) malloc(nl*nc*sizeof(int*));
        for(int i=0;i<nc;i++){
            for (int j=0;i<nl;i++){
                matriz->v[i*matriz->col+j] = 0;
            }

        }
    }else{
        printf("Erro ao alocar memória!\n");
    }
    
    return matriz;
}

void remover_matriz(Matriz* mat){
    free(mat);
}
int atribui_matriz(Matriz* mat, int i, int j,int v){
    mat->v[i*mat->col+j] = v;
    return 1;
}

int acessa_matriz(Matriz* mat,int i,int j){
    if(mat){
        return mat->v[i*mat->col+j];
    }else{
        printf("\nMatriz não existe\n");
        return 0;
    }
}

int nlinhas(Matriz * mat){
    return mat->lin;
}

int ncolunas(Matriz *mat){
    return mat->col;
}

int remover_valor_matriz(Matriz* mat,int i,int j){
    if(mat){
        mat->v[i*mat->col+j] = 0;
        return 1;
    }
    printf("Matriz NULL");
    return 0;
}
void print_matriz(Matriz* mat){
    printf("\n Print da Matriz\n");
    for(int i=0;i<ncolunas(mat);i++){
        for(int j=0;j<nlinhas(mat);j++){
            printf("\ncoluna %d, linha %d: %d\n",i,j,mat->v[i*mat->col+j]);
        }
    }
}


#endif
