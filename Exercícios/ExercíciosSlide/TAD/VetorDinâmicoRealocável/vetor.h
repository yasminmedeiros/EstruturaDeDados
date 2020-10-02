#ifndef _VETOR_H
#define _VETOR_H

typedef struct vetor Vetor;

Vetor* cria_vetord(int dim);
int insere_vetord(Vetor* vd, float x);
int tamanho_vetord(Vetor* vd);
int acessa_vetord(Vetor* vd, int pos,float*v);
void libera_vetord(Vetor* vd);

#endif