#ifndef _LINKED_LIST_C
#define _LINKED_LIST_C

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz{
    int lin;
    int col;
    int v;
    Matriz* prox;
};

Matriz* cria_matriz(int nl, int nc){
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
    if(matriz){
        matriz->col=nc;
        matriz->lin=nl;
        matriz->prox=NULL;
        matriz->v = 0;
    }else{
        printf("Erro ao alocar memória!\n");
    }
    
    return matriz;
}

void remover_matriz(Matriz* mat){
    free(mat);
}
int atribui_matriz(Matriz* mat, int i, int j,int v, Matriz* prox){
    if(mat){
        mat->lin=i;
        mat->col=j;
        mat->v =v;
        mat->prox=prox;
        return 1;
    }
    return 0;
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
