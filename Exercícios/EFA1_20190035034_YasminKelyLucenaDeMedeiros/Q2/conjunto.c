#include <stdlib.h>
#include <stdio.h>
#include "conjunto.h"

struct conjunto{
    int v;
    Conjunto* prox;
};

Conjunto* criarConjunto(int v){
    Conjunto* l = (Conjunto*) malloc(sizeof(Conjunto));
    if (l)
    {
        l->v = v;
        l->prox = NULL;
    }
}

Conjunto * conjuntoVazio(){
    Conjunto* l = (Conjunto*) malloc(sizeof(Conjunto));
    if (l)
        l = NULL; 
    return l;
}

int inserirElemento(Conjunto **l1, int v){
    Conjunto* aux = criarConjunto(v); 
    if(pertenceElemento(*l1,v)) 
        return 0;
    if(aux){
        aux->prox = *l1; 
        *l1 = aux; 
        return 1; 
    }
    return 0;
}

int removerElemento(Conjunto **l1, int v){
    Conjunto* ante = NULL;
    Conjunto* aux = *l1;
    int a = 0;

    while (aux != NULL) {
        if (aux->v == v)
        {
            a = 1;
            break;
        }

        ante = aux;
        aux = aux->prox; 
    }
    if(a){ 
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

Conjunto* uniaoConjunto(Conjunto **l1, Conjunto **l2){

    Conjunto* b = conjuntoVazio(); 
    Conjunto * aux1 = *l1; 
    Conjunto * aux2 = *l2; 

    while (aux1 != NULL) {
       inserirElemento(&b, aux1->v); 
        aux1 = aux1->prox;
        
    }
    while (aux2 != NULL){
        inserirElemento(&b, aux2->v); 
        aux2 = aux2->prox;
    }
   
    return b;

}

Conjunto * intersecaoConjunto(Conjunto **l1, Conjunto **l2){
    Conjunto* b = conjuntoVazio(); 

    Conjunto * aux1 = *l1; 
    Conjunto * aux2 = *l2; 

    if (tamanhoConjunto(*l1) <= tamanhoConjunto(*l2)){
        while (aux1 != NULL){
            if (pertenceElemento(aux2, aux1->v)){
                inserirElemento(&b, aux1->v);
            }
            aux1 = aux1->prox;
        }

        return b;        
    }
    else{
        while (aux2 != NULL) {
            if (pertenceElemento(aux1, aux2->v))
            {
                inserirElemento(&b, aux2->v);
            }

            aux2 = aux2->prox;
        }
        
        return b;    
    }
      
}

Conjunto * diferencaConjunto(Conjunto **l1, Conjunto **l2){
   
    Conjunto * y = conjuntoVazio(); 

    Conjunto * aux1 = *l1; 
    Conjunto * aux2 = *l2; 

    while (aux1 != NULL) {
        if (!pertenceElemento(aux2, aux1->v))
            inserirElemento(&y, aux1->v);
        aux1 = aux1->prox;
        
    }

    return y; 
}

int pertenceElemento(Conjunto *l1, int v){
    if (conjunto_eh_vazio(l1))
        return 0;
    while (l1 != NULL){
        if (l1->v == v)
            return 1;
        l1 = l1->prox;   
    }
    return 0;
}

int menorElemento(Conjunto *l1){
    int menor = l1->v;
    while (l1 != NULL){
        if(l1->v < menor) 
            menor = l1->v;
        l1 = l1->prox;
    }
    return menor; 
}

int maiorElemento(Conjunto *l1){
    int menor = l1->v;
    while (l1 != NULL){
        if(l1->v < menor) 
            menor = l1->v;
        l1 = l1->prox;
    }
    return menor; 
}

int igualConjunto(Conjunto *l1, Conjunto *l2){
    return (tamanhoConjunto(intersecaoConjunto(&l1, &l2)) == tamanhoConjunto(l1) && tamanhoConjunto(intersecaoConjunto(&l1, &l2)) == tamanhoConjunto(l2)) ? 1: 0;
}

int tamanhoConjunto(Conjunto *l1){ 
    int counter = 0;
    while (l1 != NULL){
        counter++; 
        l1 = l1->prox;
    }
    return counter;
}

int conjunto_eh_vazio(Conjunto *l){
    return (l == NULL);
}

void printConjunto(Conjunto *l1){
    printf("Conjunto:\n");
    while(l1 != NULL){
        printf("%d \n", l1->v);
        l1 = l1->prox;
    }
}