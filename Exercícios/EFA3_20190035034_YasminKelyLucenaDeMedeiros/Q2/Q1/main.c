#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"
int main (){
    Arvore* a = criaArvore (
                    criaNo(2,
                        criaNo(4,
                            criaNo(5,NULL,NULL),
                            NULL),
                    criaNo(1,NULL,
                        criaNo(3,
                            NULL,
                            criaNo(6, NULL,NULL)))));
    //printf(​"Quantidade de valores pares: %d\n"​, pares(a));
}