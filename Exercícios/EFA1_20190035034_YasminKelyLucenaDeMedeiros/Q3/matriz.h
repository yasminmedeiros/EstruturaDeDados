#ifndef _MATRIZ_H
#define _MATRIZ_H

typedef struct matriz Matriz;

Matriz * create_Matriz(int v);
Matriz * matriz_interseccao(Matriz **l1, Matriz **l2); 
Matriz * matriz_diferenca(Matriz **l1, Matriz **l2); 
int size(Matriz *l1); 
int conjunto_vazio(Matriz *l1); 
void print(Matriz *l1); 
int matriz_pertence(Matriz *l1, int v); 
int matriz_menor(Matriz *l1); 
int matriz_maiormaior(Matriz *l1); 
int matriz_iguais(Matriz *l1, Matriz *l2); 
Matriz * uniao(Matriz **l1, Matriz **l2);
Matriz * criar_conj_vazio(); 
int inserir(Matriz **l1, int v);
int remover(Matriz **l1, int v); 

#endif