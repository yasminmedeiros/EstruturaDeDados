
#ifndef ARVORE
#define ARVORE

typedef struct arvore Arvore;
typedef struct no No;

No* criaNo (int info, No* esq , No* dir);
Arvore* criaArvore (No* r);
int soma_xy (Arvore* a, int x,int y);
void soma(No* r, int x,int y,int* num);
#endif