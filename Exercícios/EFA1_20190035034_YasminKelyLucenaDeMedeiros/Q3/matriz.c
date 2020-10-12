#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

typedef struct tempNo {
    float v;
    int col;
    struct tempNo* prox;
} NO;

typedef NO* PONT;

typedef struct MATRIZ {
    PONT* a_linhas;
    int n_linhas;
    int n_colunas;
} MATRIZ;

MATRIZ * cria_matriz(int n_linhas, int n_colunas){
    MATRIZ *mat = (MATRIZ*) malloc(sizeof(MATRIZ));
    mat->a_linhas = (PONT*) malloc(n_linhas*sizeof(PONT));

    if(mat){
        mat->n_linhas = n_linhas;
        mat->n_colunas = n_colunas;
        for (int i=0; i < n_linhas; i++) 
            mat->a_linhas[i] = NULL;
    }

    return mat;
}

void libera_matriz(MATRIZ * mat){
    free(mat);
}

int atribui_elemento(MATRIZ * mat, int lin, int col, float v){
    if (lin-1<0 || lin-1 >= mat->n_linhas || col-1<0 || col-1 >= mat->n_colunas) 
        return 0;

    PONT ant = NULL;
    PONT atual = mat->a_linhas[lin-1];

    while (atual != NULL && atual->col < col-1) {
        ant = atual;
        atual = atual->prox;
    }

    if (atual != NULL && atual->col == col-1) {
        if (v == 0) {
            if (ant==NULL) 
                mat->a_linhas[lin-1] = atual->prox;
            else 
                ant->prox = atual->prox;
            free(atual);
        }
        else 
            atual->v = v;
    }

    else if (v != 0) {
        PONT novo = (PONT) malloc(sizeof(NO));
        
        novo->col = col-1;
        novo->v = v;
        novo->prox = atual;

        if (ant == NULL) 
            mat->a_linhas[lin-1] = novo;

        else 
            ant->prox = novo;
    }
    return 1;
}

float acessar_elemento(MATRIZ* mat, int lin, int col) {
    if (lin-1 < 0 || lin-1 >= mat->n_linhas || col-1 < 0 || col-1 >= mat->n_colunas) 
        return 0;

    PONT atual = mat->a_linhas[lin-1];

    while (atual != NULL && atual->col < col-1)
        atual = atual->prox;
    
    if (atual !=NULL && atual->col == col-1)
        return atual->v;
    
    return 0;
}

int remover_elemento(MATRIZ * mat, int lin, int col){
    if (lin-1 < 0 || lin-1 >= mat->n_linhas || col-1 < 0 || col-1 >= mat->n_colunas) 
        return 0;

    PONT atual = mat->a_linhas[lin-1];

    while (atual != NULL && atual->col < col-1)
        atual = atual->prox;
    
    if (atual !=NULL && atual->col == col-1)
    {
        free(atual);
        return 1;
    }
    
    return 0;
}

void print_matriz(MATRIZ * mat){
    int total_linhas = mat->n_linhas;
	int total_colunas = mat->n_colunas;
		
    for(int i = 0; i < total_linhas; i++)
	{
		for(int j = 0; j < total_colunas; j++)
		{
			printf("%.2f  ", acessar_elemento(mat,i+1,j+1));
		}
			printf("\n");
	}
}

