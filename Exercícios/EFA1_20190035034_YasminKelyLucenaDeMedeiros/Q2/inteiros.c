#include <stdlib.h>
#include <stdio.h>
#include "inteiros.h"

struct inteiros{
    int v;
    struct inteiros* prox;
};

Inteiros * criarInteiros(int v){
    Inteiros * l = (Inteiros*) malloc(sizeof(Inteiros));
    if (l)
    {
        l->v = v;
        l->prox = NULL;
    }
}

Inteiros * uniaoInteiros(Inteiros **l1, Inteiros **l2){
    Inteiros * a = conjunto_vazio();

    Inteiros * aux1 = *l1;
    Inteiros * aux2 = *l2;


    while (aux1 != NULL)
    {
        inserir(&a, aux1->v);

        aux1 = aux1->prox;
        
    }

    while (aux2 != NULL)
    {
        inserir(&a, aux2->v);

        aux2 = aux2->prox;
    }
    
    return a;        

}

Inteiros * conjunto_vazio(){
    Inteiros * l = (Inteiros*) malloc(sizeof(Inteiros));
    if (l)
    {
        l = NULL;
    }

    return l;
}

int insere_num(Inteiros **l1, int v){
    Inteiros * aux = criarInteiros(v);

    if(pertence(*l1,v))
        return 0;
    
    if(aux)
    {
        aux->prox = *l1;
        *l1 = aux;

        return 1;
    }

    return 0;
}

int remove_num(Inteiros **l1, int v){
    Inteiros * ante = NULL;
    Inteiros * aux = *l1;
    int found = 0;

    while (aux != NULL)
    {
        if (aux->v == v)
        {
            found = 1;
            break;
        }
        ante = aux;
        aux = aux->prox;
    }
    
    if(found){
        if (ante == NULL)
        {
            *l1 = aux->prox;
            free(aux);
            return 1;
        }

        ante->prox = aux->prox;
        free(aux);
        return 1;        
    }

    return 0;
}

Inteiros * intersecao_inteiros(Inteiros **l1, Inteiros **l2){
    Inteiros * b = criar_conj_vazio();

    Inteiros * aux1 = *l1;
    Inteiros * aux2 = *l2;

    if (tamanho_inteiros(*l1) <= tamanho_inteiros(*l2))
    {
        while (aux1 != NULL)
        {
            if (pertence(*l2, aux1->v))
            {
                inserir(&b, aux1->v);
            }

            aux1 = aux1->prox;
            
        }

        return b;        
    }
    else
    {
        while (aux2 != NULL)
        {
            if (pertence(*l1, aux2->v))
            {
                inserir(&b, aux2->v);
            }

            aux2 = aux2->prox;
        }
        
        return b;    
    }
      
}

Inteiros * diferenca_inteiros(Inteiros **l1, Inteiros **l2){
    Inteiros * y = criar_conj_vazio();

    Inteiros * aux1 = *l1;
    Inteiros * aux2 = *l2;

    while (aux1 != NULL)
    {
        if (!pertence(aux2, aux1->v))
        {
            inserir(&y, aux1->v);
        }

        aux1 = aux1->prox;
        
    }

    return y;        
}

int pertence_num(Inteiros *l1, int v){
    if (conj_vazio(l1))
        return 0;
    
    while (l1 != NULL)
    {
        if (l1->v == v) 
            return 1;
        
        l1 = l1->prox;   
    }

    return 0;
}

int menor_num(Inteiros *l1){
    int menor = maior(l1);

    while (l1 != NULL)
    {
        if(l1->v < menor)
            menor = l1->v;

        l1 = l1->prox;
    }

    return menor;
}

int maior_num(Inteiros *l1){
    int maior = 0;

    while (l1 != NULL)
    {
        if(l1->v > maior)
            maior = l1->v;

        l1 = l1->prox;
    }

    return maior;    
}

int igualdade_inteiros(Inteiros *l1, Inteiros *l2){
    return  (tamanho_inteiros(interseccao(&l1, &l2)) == tamanho_inteiros(l1)) ? 1:0;
}

int tamanho_inteiros(Inteiros *l1){ // Verifica tamanho do Inteiros
    int counter = 0;

    while (l1 != NULL)
    {
        counter++; 
        l1 = l1->prox;

    }
    
    return counter;    
}

int e_vazio_inteiro(Inteiros *l){
    return (l == NULL);
}

void printInteiros(Inteiros *l1){
    while (l1 != NULL)
    {
        printf("%d\n", l1->v);
        l1 = l1->prox;
    }
    
}