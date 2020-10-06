#ifndef _MATRIZ_C
#define _MATRIZ_C

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz{
    int lin;
    int col;
    int v;
    Matriz* prox;
};

Matriz* cria_matriz(int nl, int nc, int v, Matriz* prox){
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
    if(matriz){
        matriz->col=nc;
        matriz->lin=nl;
        matriz->prox=prox;
        matriz->v = v;
    }else{
        printf("Erro ao alocar memória!\n");
    }
    
    return matriz;
}

void remover_matriz(Matriz* mat){
    while(mat!=NULL){
        
    }
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

int acessa_matriz(Matriz* mat,int col,int lin){
    if(mat){
        while(mat->prox !=NULL){
            if(mat->col==col & mat->lin==lin){
                return mat->v;
            }
            mat = mat->prox;
        }
    }else{
        printf("\nMatriz não existe\n");
        return 0;
    }
    //printf("Não encontrado\n");
    return 0;
}

int nlinhas(Matriz * mat){
    return mat->lin;
}

int ncolunas(Matriz *mat){
    return mat->col;
}

int remover_valor_matriz(Matriz* mat,int v){
    if(mat){
        while(mat->prox !=NULL){
            if(mat->v=v){
                free(mat);
                mat = mat->prox;
                return 1;
            }
            mat = mat->prox;
    }
    }else{
        printf("\nMatriz não existe\n");
        return 0;
    }
    printf("Não encontrado\n");
    return 0;
}
void print_matriz(Matriz* mat){
    printf("\n Print da Matriz\n");
    for(int i=0;i<ncolunas(mat);i++){
        for(int j=0;j<nlinhas(mat);j++){
            if(acessa_matriz(mat,i,j)!=0){
                printf("\ncoluna %d, linha %d: %d\n",i,j,mat->v[i*mat->col+j]);
            }else{
                printf("\ncoluna %d, linha %d: %d\n",i,j,0);
            }
        }
    }
}


#endif
