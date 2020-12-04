#ifndef ARVORE
#define ARVORE

typedef struct arvore Arvore;
typedef struct no No;

No* criaNo (int info, No* esq , No* dir);
Arvore* criaArvore (No* r);
int um_filho (Arvore* a);
void numFilhos(No* r, int* num);
#endif