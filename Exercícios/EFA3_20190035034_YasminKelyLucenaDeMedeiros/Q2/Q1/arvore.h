#ifndef ARVORE_H
#define ARVORE_h

typedef struct arvore Arvore;
typedef struct no No;

No* criaNo (int info, No* esq , No* dir);
Arvore* criaArvore (No* r);
int pares (Arvore* a);
void noPar(No* r, int* num);
#endif