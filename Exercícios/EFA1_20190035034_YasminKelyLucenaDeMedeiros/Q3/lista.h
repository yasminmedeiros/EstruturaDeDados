#ifndef _LISTA_H
#define _LISTA_H

typedef struct lista Lista;

typedef struct matriz_esparsa Matriz;

Matriz* criarMatriz(int lin,int col);

void apagarMatriz(Matriz* matriz);

int inserirValor(Matriz* matriz, int lin, int col, int v);

int retornarValor(Matriz* matriz, int lin, int col);

int removerValor(Matriz* matriz, int lin, int col);

void printMatriz(Matriz* matriz);

#endif
