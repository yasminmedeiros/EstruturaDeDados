
#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

typedef struct elemento{
    int v;
    int col;
    Elemento* prox;
};


typedef struct matriz {
    Elemento** linhas; 
    int lin;
    int col;
};

Matriz* criaMatriz(int lin, int col){

    Matriz *mat = (Matriz*) malloc(sizeof(Matriz));
    mat->linhas = (Elemento**) malloc(lin*sizeof(Elemento));

    if(mat){
        mat->lin = lin;
        mat->col = col;
        for (int i=0; i < lin; i++)
            mat->linhas[i] = NULL;
    }
    return mat;
}

void liberaMatriz(Matriz * mat){
    free(mat);
}

int atribuiElemento(Matriz * mat, int lin, int col, int v){
    if (lin<=0 || lin > mat->lin || col<=0 || col> mat->col) 
        return 0;

    Elemento* ante = NULL;
    Elemento* atual = mat->linhas[lin-1]; 

    while (atual != NULL && atual->col < col-1) { 
        ante = atual;
        atual = atual->prox;
    }

    if (atual != NULL && atual->col == col-1) { 
        if (v == 0) {
            if (ante==NULL)
                mat->linhas[lin-1] = atual->prox;
            else 
                ante->prox = atual->prox;

            free(atual); 
        }else 
            atual->v = v;
    }

    else if (v != 0) {
        Elemento* novo = (Elemento*) malloc(sizeof(Elemento)); 
        
        novo->col = col-1;
        novo->v = v;
        novo->prox = atual;

        if (ante == NULL) 
            mat->linhas[lin-1] = novo;

        else 
            ante->prox = novo;
    }
    return 1;
}

int acessarElemento(Matriz* mat, int lin, int col) {
    if (lin <= 0 || lin > mat->lin || col <= 0 || col > mat->col) 
        return 0;

    Elemento* atual = mat->linhas[lin-1];
    while (atual != NULL && atual->col < col-1) 
        atual = atual->prox;
    
    if (atual !=NULL && atual->col == col-1) 
        return atual->v; 
    
    return 0;
}

int removerElemento(Matriz * mat, int lin, int col){
    if (lin<=0 || lin > mat->lin || col<=0 || col> mat->col) 
        return 0;

    Elemento* atual = mat->linhas[lin-1];

    while (atual != NULL && atual->col < col-1) 
        atual = atual->prox;
    
    if (atual != NULL && atual->col == col-1){
        free(atual); 
        return 1;
    }
    
    return 0;
}

void printMatriz(Matriz * mat){
    int total_linhas = mat->lin;
	int total_colunas = mat->col;
	printf("Matriz:\n");
    for(int i = 1; i <= total_linhas; i++){
		for(int j = 1; j <= total_colunas; j++){
			printf("%d ", acessarElemento(mat,i,j));
		}
			printf("\n");
	}
}

