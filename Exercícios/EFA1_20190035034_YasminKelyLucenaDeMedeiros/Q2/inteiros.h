#ifndef _INTEIROS_H
#define _INTEIROS_H

typedef struct inteiros Inteiros;

Inteiros* uniao_inteiros(Inteiros* a,Inteiros* b);

Inteiros* conjunto_vazio();

int insere_num(Inteiros* a, int x);

int remove_num(Inteiros* a, int x);

Inteiros* intersecao_inteiros(Inteiros* a,Inteiros* b);

Inteiros* diferenca_inteiros(Inteiros* a,Inteiros* b);

int pertence_num(Inteiros* a, int x);

int maior_num(Inteiros* a);

int menor_num(Inteiros* a);

int igualdade_inteiros(Inteiros* a,Inteiros* b);

int tamanho_inteiros(Inteiros* a);

int e_vazio_inteiro(Inteiros* a);
 

#endif
