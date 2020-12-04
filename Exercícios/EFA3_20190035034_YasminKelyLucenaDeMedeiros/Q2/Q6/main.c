
#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"
int main (){
    Arvore* a = criaArvore (
                    criaNo(3,
                        criaNo(1,criaNo(2,NULL,NULL),NULL),
                        criaNo(4,NULL,criaNo(5,NULL,criaNo(8,criaNo(6,NULL,NULL),NULL)))
                    )
                );

    printf("A soma dos elementos que possuem informação maior que 4: %d\n",somatotal(a,4));
}