#ifndef _INTEIROS_H
#define _INTEIROS_H

typedef struct inteiros Inteiros;

Inteiros* uniaoInteiros(Inteiros* a,Inteiros* b);

Inteiros* criarInteiros(Inteiros* l, int info);//ok

void printInteiros(Inteiros* a);//ok

Inteiros* conjunto_vazio();//ok

int insere_num(Inteiros* a, int x);

int remove_num(Inteiros* a, int x);//ok

Inteiros* intersecao_inteiros(Inteiros* a,Inteiros* b);

Inteiros* diferenca_inteiros(Inteiros* a,Inteiros* b);

int pertence_num(Inteiros* a, int x);//ok

int maior_num(Inteiros* a);//ok

int menor_num(Inteiros* a);//ok

int igualdade_inteiros(Inteiros* a,Inteiros* b);

int tamanho_inteiros(Inteiros* a);//ok

int e_vazio_inteiro(Inteiros* a); //ok
 

#endif
