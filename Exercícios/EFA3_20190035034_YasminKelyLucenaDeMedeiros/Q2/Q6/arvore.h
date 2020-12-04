
#ifndef ARVORE
#define ARVORE

typedef struct arvore Arvore;
typedef struct no No;

No* criaNo (int info, No* esq , No* dir);
Arvore* criaArvore (No* r);
int somatotal (Arvore* a, int x);
void soma(No* r, int x,int* num);
#endif