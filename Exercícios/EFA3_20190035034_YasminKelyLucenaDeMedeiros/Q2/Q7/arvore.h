#ifndef ARVORE
#define ARVORE

typedef struct arvore Arvore;
typedef struct no No;

No* criaNo (int info, No* esq , No* dir);
Arvore* criaArvore (No* r);
int nfolhas_maiores  (Arvore* a, int x);
int nfolhas(No* r, int x);
#endif