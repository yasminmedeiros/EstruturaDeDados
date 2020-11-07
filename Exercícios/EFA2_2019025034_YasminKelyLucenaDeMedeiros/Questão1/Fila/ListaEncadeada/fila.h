#ifndef FILA_H
#define FILA_H

typedef struct fila Fila ;
typedef struct elemento Elemento;

Fila* fila_cria();
void fila_insere (Fila* f, float v);
float fila_retira (Fila* f);
int fila_vazia (Fila* f);
void fila_libera (Fila* f);
void fila_imprime (Fila* f);

#endif