#ifndef _LISTA_C
#define _LISTA_C

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct linha{
    int lin;
    int col;
    int v;
    struct linha* proxElementoDaLinha;
};
struct matriz_esparsa{
    struct linha* linhas;
    int lin;
    int col;
}

Matriz* criarMatriz(int lin,int col){
    Matriz* a = (Matriz*)malloc(sizeof(Matriz));
    a->linhas = (Linha*)mallor(sizeof(Linha));
    a->linhas->lin = -1;
    a->linhas->col = -1;
    a->linhas->proxElementoDaLinha = NULL;
    a->lin=lin;
    a->col=col;
    return a;
}

void apagarMatriz(Matriz* matriz){
    free(matriz);
}
Linha* criar linha

int inserirValor(Matriz* matriz, int lin, int col, float v){
    Linha* l = (Linha*)mallor(sizeof(Linha));
    if(l & matriz){
        while(matriz->linhas->proxElementoDaLinha == NULL){
            matriz->linhas = matriz->linhas->proxElementoDaLinha
        }//ÚLTIMO ELEMENTO

        if(lin<=matriz->lin & col<=matriz->col){
            //PRIMEIRO CADASTRO
            if(matriz->linhas->lin==-1){
                matriz->linhas->lin = lin;
                matriz->linhas->col = col;
                matriz->linhas->proxElementoDaLinha= NULL;
            }else{
            //CADASTRO NORMAL
            
            }
        }else{
            printf("Tamanho de linha e coluna inválidos\n");
            return 0;
        }
    }else{
        printf("Matriz ou linha nula");
    }
    
}

int retornarValor(Matriz* matriz, int lin, int col);

int removerValor(Matriz* matriz, int lin, int col);

void printMatriz(Matriz* matriz);

#endif