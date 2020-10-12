#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct elemento Elemento;
typedef struct matriz Matriz;

Matriz* criaMatriz(int lin, int col);
void liberaMatriz(Matriz * mat);
int acessarElemento(Matriz * mat, int lin, int col);
int atribuiElemento(Matriz * mat, int lin, int col, int v);
int removerElemento(Matriz * mat, int lin, int col);
void printMatriz(Matriz * mat);

#endif