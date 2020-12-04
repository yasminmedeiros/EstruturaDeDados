#ifndef _COMPLEXO_H
#define _COMPLEXO_H

typedef struct complexo Complexo;

Complexo* setComplexo(int a, int b);
int getComplexoA(Complexo* com);
int getComplexoB(Complexo* com);
Complexo* somaVetores(Complexo* com1,Complexo* com2);
Complexo* subtracaoVetores(Complexo* com1,Complexo* com2);
Complexo* multiplicacaoVetores(Complexo* com1,Complexo* com2);
Complexo* divisaoVetores(Complexo* com1,Complexo* com2);
void liberaComplexo (Complexo* com);

#endif