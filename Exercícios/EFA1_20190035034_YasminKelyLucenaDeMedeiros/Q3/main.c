#include <stdio.h>
#include "conjunto.h"

int main(){

    Conjunto *conj1=criar_conj_vazio(), *conj2 = criar_conj_vazio();
    Conjunto *conj3;

    printf("%d a\n", size(conj1));
    printf("%d a\n", conj_vazio(conj1));
    printf("%d a\n", inserir(&conj1,1));
    printf("%d a\n", inserir(&conj1,1));
    printf("%d a\n", inserir(&conj1,2));
    printf("%d a\n", inserir(&conj1,3));
    printf("%d a\n", inserir(&conj1,60));
    printf("%d a\n", inserir(&conj1,6));
    printf("%d a\n", inserir(&conj1,5));
    printf("%d a\n", inserir(&conj1,4));
    printf("%d a\n", inserir(&conj1,5));

    printf("%d a\n", inserir(&conj2,30));
    printf("%d a\n", inserir(&conj2,60));
    printf("%d a\n", inserir(&conj2,1));
    printf("%d a\n", inserir(&conj2,7));
    printf("%d a\n", inserir(&conj2,8));
    printf("%d a\n", inserir(&conj2,5));
    printf("%d a\n", inserir(&conj2,20));
    printf("%d a\n", inserir(&conj2,5));
    printf("%d a\n", inserir(&conj2,2));

    


    conj3 = und
    return 0;
}