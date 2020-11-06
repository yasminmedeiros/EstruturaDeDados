#ifndef PILHA_H
#define PILHA_H

typedef struct Pilha pilha ;

Pilha* pilha_cria (void );

void pilha_push (Pilha* p, float v);

float pilha_pop (Pilha* p);

int pilha_vazia (Pilha* p);

void pilha_libera (Pilha* p);

#endif