#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashB.h"


struct pessoa
{
    long int cpf;
    char nome[40];
    char sexo;//M = Masculino/F = Feminino
    int idade;
};

struct hash {
    int n; // numero de elementos inseridos
    int dim; // dimensao da tabela
    Pessoa** p;
};

static int hash (long int cpf, Hash* tabela){
    return ((tabela->dim - 2) - cpf % (tabela->dim - 2)); // criação do hash
}

static void redimensiona (Hash* tabela){
    int dim = tabela->dim;
    Pessoa** ant = tabela->p;
    tabela->n = 0;
    tabela->dim *= 1.765;
    tabela->p  = (Pessoa**) malloc(tabela->dim*sizeof(Pessoa)); 

    for (int i=0; i<tabela->dim; ++i)
        tabela->p[i] = NULL;

    for (int i=0;i<tabela->dim;i++){
        if(ant[i]){
            insert_hash(tabela,ant[i]);
        }
    }
    free(ant);

}

int remove_hash(Hash* tabela, long int cpf){

    int x = hash(cpf, tabela);

    while (tabela->p[x] != NULL) {

        if (tabela->p[x]->cpf == cpf)
        {
            free(tabela->p[x]);
            return 1;
        }
        
        x = (++x) % tabela->dim;
    }

    return 0;
}

Hash* create_hash(){
    Hash* tabela = (Hash*) malloc(sizeof(Hash));
    if(tabela){
        tabela->n = 0;
        tabela->dim = 10;
        tabela->p = (Pessoa**) malloc(tabela->dim*sizeof(Pessoa));
        
        for (int i=0;i<tabela->dim;i++)
            tabela->p[i] = NULL;
        
    }
    return tabela;
}
Pessoa* insert_hash(Hash* tabela, Pessoa* pessoa){
    if(tabela->n > 0.75*tabela->dim)
        redimensiona(tabela);

    int x = hash(pessoa->cpf,tabela);

    while(tabela->p[x]!=NULL)
        x = (++x)%tabela->dim;
    
    tabela->p[x] = pessoa;
    tabela->n++;
    return pessoa;
}
Pessoa* search_hash(Hash* tabela, int long cpf){
    int h1 = hash(cpf,tabela);
    int h2 = hash(cpf,tabela);

    while(tabela->p[h1]){
        if(tabela->p[h1]->cpf == cpf)
            return tabela->p[h1];
        
        h1 = (h1+h2)%tabela->dim; //incremento circular
    }
    return NULL;
}
Pessoa* init_Pessoa(long int cpf,char* nome,char sexo,int idade){
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));
    if(p){
        p->cpf = cpf;
        strcpy(p->nome, nome);
        p->sexo = sexo;
        p->idade = idade;

    }
    return p;
}

void print_Pessoa(Pessoa* a){
    printf("\n%s\n", a->nome);
    printf("%c\n", a->sexo);
    printf("%ld\n", a->cpf);
    printf("%d\n", a->idade);
}
