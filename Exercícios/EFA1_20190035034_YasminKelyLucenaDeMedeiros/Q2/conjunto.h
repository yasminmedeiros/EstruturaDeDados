#ifndef CONJUNTO_H
#define CONJUNTO_H

typedef struct conjunto Conjunto;

Conjunto* criarConjunto(int v); 
Conjunto* uniaoConjunto(Conjunto **l1, Conjunto **l2);
Conjunto* conjuntoVazio(); 
int inserirElemento(Conjunto **l1, int v);
int removerElemento(Conjunto **l1, int v); 
Conjunto* intersecaoConjunto(Conjunto **l1, Conjunto **l2); 
Conjunto* diferencaConjunto(Conjunto **l1, Conjunto **l2); 
int pertenceElemento(Conjunto *l1, int v); 
int menorElemento(Conjunto *l1); 
int maiorElemento(Conjunto *l1); 
int igualConjunto(Conjunto *l1, Conjunto *l2); 
int tamanhoConjunto(Conjunto *l1); 
int conjunto_eh_vazio(Conjunto *l1); 
void printConjunto(Conjunto *l1);

#endif