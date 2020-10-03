#include <stdio.h>
#include "inteiros.h"

int main(){

    Inteiros*a = criarInteiro(1);
    Inteiros*b = criarInteiro(2);
    Inteiros*c = criarInteiro(3);
    Inteiros*d = criarInteiro(4);

    Inteiros* x = uniaoInteiros(a,b);
    printf("%d", x->info);

    return 0;
}