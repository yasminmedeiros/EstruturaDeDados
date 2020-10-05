#ifndef _INTEIROS_C
#define _INTEIROS_C

#include "inteiros.h"
#include <stdio.h>
#include <stdlib.h>

struct inteiros{
    int info;
    struct inteiros* prox;
};

int tamanho_inteiros(Inteiros* a){
    int counter=0;
    while(a!=NULL){
        counter++;
        a = a->prox;
    }
    return counter;
}

Inteiros* conjunto_vazio(){
    Inteiros* aux = (Inteiros*) malloc(sizeof(Inteiros));
    aux->prox=NULL;
    aux->info=0;
    return aux;
}

int insere_num(Inteiros* a, int x){
    if(a){
        a->info=x;
        return 1;
    }else{
        printf("Lista Vazia");
        return 0;
    }
}

int remove_num(Inteiros* a, int x){
    Inteiros * aux = a->prox;
    while(a->prox!=NULL){
        if(aux->info ==x){
            a->prox=aux->prox;
            return 1;
        }
        a = a->prox;
        aux = aux->prox;
    }
    printf("Não encontrado");
    return 0;
}

Inteiros* intersecao_inteiros(Inteiros* a,Inteiros* b){
    Inteiros* c = conjunto_vazio();
    if(c){
        while(a->prox!=NULL){
            if(pertence_num(b,a->info)){
                printf("aqui");
                c = a;
            }
            a=a->prox;
        }
        c->prox=NULL;
        
        printInteiros(c);
        return c;
    }else{
        printf("\nNão alocado espaço de memória\n");
        return conjunto_vazio();
    }
}

Inteiros* diferenca_inteiros(Inteiros* a,Inteiros* b){
    Inteiros* aux = conjunto_vazio();

    if(tamanho_inteiros(a)!= tamanho_inteiros(b)){
        return 0;
    }

    int counter = tamanho_inteiros(a) -1;

    aux->info = a->info - b->info;

    Inteiros* c = conjunto_vazio();

    aux->prox = c;
    a = a->prox;
    b = b->prox;

    while(counter>0){
        c->info =(a->info - b->info);
        a = a->prox;
        b = b->prox;
        counter--;
        if(counter>0){
            c->prox = conjunto_vazio();
            c = c->prox;
        }
    }
    return aux; 
    
}

int pertence_num(Inteiros* a, int x){
    do{
        if(a->info==x){
            return 1;
        }
        a=a->prox;
    }while(a->prox!=NULL);

    if(a->info==x){
            return 1;
    }
        return 0;
}

int maior_num(Inteiros* a){
    if(a){
        int x = a->info;
        do{
            if(a->info>x){
                x=a->info;
            }
            a=a->prox;
        }while(a->prox!=NULL);
        if(a->info>x){
                x=a->info;
        }
        return x;
    }else{
        printf("Inteiro vazio");
        return 0;
    }
}

int menor_num(Inteiros* a){
    if(a){
        int x = a->info;
        do{
            if(a->info<x){
                x=a->info;
            }
            a=a->prox;
        }while(a->prox!=NULL);
        if(a->info<x){
                x=a->info;
        }
        return x;
    }else{
        printf("Inteiro vazio");
        return 0;
    }
}

int igualdade_inteiros(Inteiros* a,Inteiros* b){
    if(tamanho_inteiros(a)!= tamanho_inteiros(b)){
        return 0;
    }
    int counter = tamanho_inteiros(a);
    while(counter!=0){
        if(a->info!=b->info){
            return 0;
        }
        a = a->prox;
        b = b->prox;
        counter--;
    }
    return 1;
}

int e_vazio_inteiro(Inteiros* a){
    if (a->prox == conjunto_vazio()->prox & a->info==0){
        return 1;
    }else{
        return 0;
    }    
}

Inteiros* criarInteiros(Inteiros* l, int info){
    Inteiros* aux = (Inteiros*) malloc(sizeof(Inteiros));
    aux->info=info;
    aux->prox=l;
    return aux;
}

void printInteiros(Inteiros* a){
    printf("Lista de Inteiros:\n");
    while(a->prox!=NULL){
        printf("%d\n",a->info);
        a = a->prox;
    }
    printf("%d\n",a->info);

}

Inteiros* uniaoInteiros(Inteiros* a,Inteiros* b){
    Inteiros* c = conjunto_vazio();
    
    if (c){
        c = a;
        while (a->prox!= NULL)
        { 
            if(pertence_num(c,a->info) == 0){
                c = a;
                c = c->prox;
            }
            a = a->prox;
            
        }
        printInteiros(c);
        while (b->prox!= NULL){
            if(pertence_num(c, b->info)==0){
                c = b;
                c = c->prox;
            }
            b = b->prox;
        }
        
        return c;
    }
    else{
        printf("Não foi possível alocar memória");
        return conjunto_vazio();
    }
    
    
}

#endif