#include <stdio.h>
#include "conjunto.h"

int main(){
    Conjunto *conj1 = conjuntoVazio(); 
    Conjunto *conj2 = conjuntoVazio(); 


    printf("%s\n", conjunto_eh_vazio(conj1) ? "Vazio" : "Não Vazio");
    printf("%s\n", conjunto_eh_vazio(conj2) ? "vazio" : "Não Vazio");


    printf("Conjunto 1:\n");
    printf("%s\n", inserirElemento(&conj1,2) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", inserirElemento(&conj1,3) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", inserirElemento(&conj1,4) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", inserirElemento(&conj1,2) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", inserirElemento(&conj1,-4) ? "Inserido Com Sucesso": "Valor ja existe");
    printf("%s\n", inserirElemento(&conj1,-9) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", inserirElemento(&conj1,7) ? "Inserido Com Sucesso" : "Valor ja existe");

    printf("Conjunto 2:\n");
    printf("%s\n", inserirElemento(&conj2,4) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,5) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,2) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,-8) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,2) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,5) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,7) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,9) ? "Valor inserido" : "Valor ja existe no Conjunto");
    printf("%s\n", inserirElemento(&conj2,8) ? "Valor inserido" : "Valor ja existe no Conjunto");

    printf("\nConjunto 1: ");
    printConjunto(conj1);
    printf("\nConjunto 2: ");
    printConjunto(conj2);

    printf("\n");
    printf("%s\n", pertenceElemento(conj1, 5) ? "Pertence\n" : "Nao pertence\n");
    printf("%s\n", pertenceElemento(conj1, 9) ? "Pertence\n" : "Nao pertence\n");
    printf("%s\n", pertenceElemento(conj2, 5) ? "Pertence\n" : "Nao pertence\n");
    printf("%s\n", pertenceElemento(conj2, 4) ? "Pertence\n" : "Nao pertence\n");


    printf("Maior valor do Conjunto 1: %d\n", maiorElemento(conj1));
    printf("Maior valor do Conjunto 2: %d\n", maiorElemento(conj2));

    printf("Menor valor do Conjunto 1: %d\n", menorElemento(conj1));
    printf("Menor valor do Conjunto 2: %d\n", menorElemento(conj2));


    printf("Tamanho do Conjunto 1: %i\n", tamanhoConjunto(conj1));
    printf("Tamanho do Conjunto 2: %i\n", tamanhoConjunto(conj2));

    printf("\n");
    Conjunto* uniao = uniaoConjunto(&conj1, &conj2); 
    printf("Conjunto uniao: ");
    printConjunto(uniao); 

    printf("\n");
    Conjunto *intersecao = intersecaoConjunto(&conj1, &conj2); 
    printf("Conjunto interseccao: ");
    printConjunto(intersecao);

    printf("\n");
    Conjunto *diferenca = diferencaConjunto(&conj1, &conj2); 
    printf("Conjunto diferenca entre 1 e 2: ");
    printConjunto(diferenca);

    printf("%s\n", igualConjunto(conj1, conj2) ? "Iguais\n" : "Diferentes\n");


    printf("%s\n", removerElemento(&conj1, 9) ? "Removido" : "Nao encontrado");
    return 0;
}