#ifndef _LISTA_C
#define _LISTA_C

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
    int lin;
    int col;
    int v;
    Lista* proxElementoDaLinha;
};
struct matriz_esparsa{
    Lista* linhas;
    int lin;
    int col;
};

Matriz* criarMatriz(int lin,int col){
    Matriz* a = (Matriz*)malloc(sizeof(Matriz));
    a->linhas = (Lista*)malloc(sizeof(Lista));
    Lista* b = a->linhas;
    b->col = -1;
    b->lin = -1;
    b->proxElementoDaLinha = NULL;
    a->lin=lin;
    a->col=col;
    return a;
}

void apagarMatriz(Matriz* matriz){
    free(matriz);
}

int inserirValor(Matriz* matriz, int lin, int col, int v){
    Lista* l = (Lista*)malloc(sizeof(Lista));
    if(l!=NULL & matriz!=NULL){
        Lista* x = matriz->linhas;
        while(x->proxElementoDaLinha == NULL){
            matriz->linhas = x->proxElementoDaLinha;
        }//ÚLTIMO ELEMENTO

        if(lin<=matriz->lin & col<=matriz->col){
            //PRIMEIRO CADASTRO
            if(x->lin==-1){
                x = l;
                l->lin = lin;
                l->col = col;
                l->v = v;
                l->proxElementoDaLinha = NULL;
                return 1;
            }else{
            //CADASTRO NORMAL
                x = l;
                matriz->linhas= x;
                l->lin = lin;
                l->col = col;
                l->v = v;
                l->proxElementoDaLinha = NULL;
                return 1;
            }
        }else{
            printf("Tamanho de linha e coluna inválidos\n");
            return 0;
        }
    }else{
        printf("Matriz ou linha nula");
    }
    
}

int retornarValor(Matriz* matriz, int lin, int col){
    Lista* x = matriz->linhas;
    while (x->proxElementoDaLinha != NULL){
        if(x->lin == lin & x->col == col){
            return x->v;
        }
        x = x->proxElementoDaLinha;
    }
}

int removerValor(Matriz* matriz, int lin, int col){return 1;}

void printMatriz(Matriz* matriz){}

#endif