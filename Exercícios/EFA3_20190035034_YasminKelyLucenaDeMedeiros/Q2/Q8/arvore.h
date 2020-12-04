
#ifndef ARVORE
#define ARVORE

typedef struct arvore Arvore;
typedef struct no No;

No* criaNo (int info, No* esq , No* dir);
Arvore* criaArvore (No* r);
int nivel (Arvore* a, int x);
int identificando(No* r, int x);
#endif