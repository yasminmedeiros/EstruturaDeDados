#ifndef _MATRIZ_H
#define _MATRIZ_H

typedef struct matriz Matriz;

Matriz* cria_matriz(int nl, int nc);
void remover_matriz(Matriz* mat);
int atribui_matriz(Matriz* mat, int i, int j,int v);
int acessa_matriz(Matriz* mat,int i,int j);
int remover_valor_matriz(Matriz* mat,int i,int j);
void print_matriz(Matriz* mat);
int nlinhas(Matriz* mat);
int ncolunas(Matriz* mat);



#endif
