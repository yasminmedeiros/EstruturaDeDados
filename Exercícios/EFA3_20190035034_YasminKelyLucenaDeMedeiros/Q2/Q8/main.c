
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
    printf("O número do elemento 3: %d\n",nivel(a,3));
    printf("O número do elemento 1: %d\n",nivel(a,1));
    printf("O número do elemento 2: %d\n",nivel(a,2));
    printf("O número do elemento 4: %d\n",nivel(a,4));
    printf("O número do elemento 5: %d\n",nivel(a,5));
    printf("O número do elemento 8: %d\n",nivel(a,8));
    printf("O número do elemento 6: %d\n",nivel(a,6));

} 