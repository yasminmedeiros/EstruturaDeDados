#ifndef _INTEIROS_H
#define _INTEIROS_H

typedef struct inteiros Inteiros;

Inteiros* uniaoInteiros(Inteiros** l1,Inteiros** l2);
Inteiros* criarInteiros(int v);
void printInteiros(Inteiros* l1);
Inteiros* conjunto_vazio();//ok
int insere_num(Inteiros**l1, int v);
int remove_num(Inteiros**l1, int v);
Inteiros* intersecao_inteiros(Inteiros** l1,Inteiros** l2);
Inteiros* diferenca_inteiros(Inteiros** l1,Inteiros** l2);
int pertence_num(Inteiros* l1, int v);
int maior_num(Inteiros* l1);//ok
int menor_num(Inteiros* l1);//ok
int igualdade_inteiros(Inteiros* l1,Inteiros* l2);
int tamanho_inteiros(Inteiros* l1);//ok
int e_vazio_inteiro(Inteiros* l1); //ok
 

#endif
