#ifndef _LINKED_LIST_C
#define _LINKED_LIST_C

#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

struct complexo{
    int a;
    int b;
};

Complexo* setComplexo(int a, int b){
    Complexo* aux = (Complexo*) malloc(sizeof(Complexo));
    aux->a=a;
    aux->b=b;
    return aux;
}
int getComplexoA(Complexo* com){
    return com->a;
}
int getComplexoB(Complexo* com){
    return com->b;
}
Complexo* somaVetores(Complexo* com1,Complexo* com2){
    Complexo* aux = (Complexo*) malloc(sizeof(Complexo));
    aux->a=com1->a+com2->a;
    aux->a=com1->b+com2->b;
    return aux;
}
Complexo* subtracaoVetores(Complexo* com1,Complexo* com2){
    Complexo* aux = (Complexo*) malloc(sizeof(Complexo));
    aux->a=com1->a-com2->a;
    aux->a=com1->b-com2->b;
    return aux;
}
Complexo* multiplicacaoVetores(Complexo* com1,Complexo* com2){
    Complexo* aux = (Complexo*) malloc(sizeof(Complexo));
    aux->a=com1->a*com2->a;
    aux->a=com1->b*com2->b;
    return aux;
}
Complexo* divisaoVetores(Complexo* com1,Complexo* com2){
    Complexo* aux = (Complexo*) malloc(sizeof(Complexo));
    aux->a=com1->a/com2->a;
    aux->a=com1->b/com2->b;
    return aux;
}
void liberaComplexo (Complexo* com){
    free(com);
}

#endif