#include <stdio.h>
#include "inteiros.h"

int main(){
    Inteiros *conj1 = conjunto_vazio(); 
    Inteiros *conj2 = conjunto_vazio(); 


    printf("%s\n", e_vazio_inteiro(conj1) ? "Vazio" : "Não Vazio");
    printf("%s\n", e_vazio_inteiro(conj2) ? "vazio" : "Não Vazio");


    printf("Conjunto 1:\n");
    printf("%s\n", insere_num(&conj1,2) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", insere_num(&conj1,3) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", insere_num(&conj1,4) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", insere_num(&conj1,2) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", insere_num(&conj1,-4) ? "Inserido Com Sucesso": "Valor ja existe");
    printf("%s\n", insere_num(&conj1,-9) ? "Inserido Com Sucesso" : "Valor ja existe");
    printf("%s\n", insere_num(&conj1,7) ? "Inserido Com Sucesso" : "Valor ja existe");

    printf("Conjunto 2:\n");
    printf("%s\n", insere_num(&conj2,4) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,5) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,2) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,-8) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,2) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,5) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,7) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,9) ? "Valor inserido" : "Valor ja existe no Inteiros");
    printf("%s\n", insere_num(&conj2,8) ? "Valor inserido" : "Valor ja existe no Inteiros");

    printf("\nConjunto 1: ");
    printInteiros(conj1);
    printf("\nConjunto 2: ");
    printInteiros(conj2);



 


    printf("\n");
    Inteiros* uniao = uniaoInteiros(&conj1, &conj2); 
    printf("Inteiros uniao: ");
    printInteiros(uniao); 

    printf("\n");
    Inteiros *interseccao = intersecao_inteiros(&conj1, &conj2); 
    printf("Inteiros interseccao: ");
    printInteiros(interseccao);

   

    printf("\n");
    Inteiros *diferenca = diferenca_inteiros(&conj1, &conj2); 
    printf("Inteiros diferenca entre 1 e 2: ");
    printInteiros(diferenca);

    

    // Funcao pertence_num

    printf("\n");
    printf("%s\n", pertence_num(conj1, 5) ? "pertence_num" : "Nao pertence_num");
    printf("%s\n", pertence_num(conj1, 8) ? "pertence_num" : "Nao pertence_num");
    printf("%s\n", pertence_num(conj1, 9) ? "pertence_num" : "Nao pertence_num");
    printf("%s\n", pertence_num(conj2, 5) ? "pertence_num" : "Nao pertence_num");
    printf("%s\n", pertence_num(conj2, 1) ? "pertence_num" : "Nao pertence_num");
    printf("%s\n", pertence_num(conj2, 4) ? "pertence_num" : "Nao pertence_num");


    printf("Maior valor do Inteiros 1: %i\n", maior_num(conj1));
    printf("Menor valor do Inteiros 1: %i\n", menor_num(conj1));
    printf("Maior valor do Inteiros 2: %i\n", maior_num(conj2));
    printf("Menor valor do Inteiros 2: %i\n", menor_num(conj2));


    printf("%s\n", igualdade_inteiros(conj1, conj2) ? "Os Inteiros sao iguais" : "Os Inteiros sao diferentes");

    printf("Tamanho do Inteiros 1: %i\n", tamanho_inteiros(conj1));
    printf("Tamanho do Inteiros 2: %i\n", tamanho_inteiros(conj2));

    printf("%s\n", remove_num(&conj1, 9) ? "Removido" : "Nao encontrado");
    

    return 0;
}