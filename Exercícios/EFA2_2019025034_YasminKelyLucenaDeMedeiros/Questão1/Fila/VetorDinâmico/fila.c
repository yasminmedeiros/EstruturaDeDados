#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fila.h"

struct fila {
    int n; //número de elementos
    int ini; //índice da fila
    int dim; //dimensão do vetor
    float* vet; //vetor dos elementos
};

Fila* fila_cria (void ){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->dim = 6; 
    f->vet = (float*) malloc(f-> dim*sizeof (float ));
    f->n = 0; 
    f->ini = 0;
    return f;
}
void fila_insere (Fila* f, float v){

    int fim;
    if (f->n == f-> dim) { //Se já estiver totalmente preenchido
        f->dim *= 2; //Dobra o tamanho
        f->vet = (float *) realloc(f->vet, f-> dim*sizeof (float )); //aumenta o tamanho do vetor
        if (f->ini != 0){
            memmove(&f-> vet[f->dim - f->ini],//endereço de destino
                &f-> vet[f->ini], //endereço de origem
                (f->n - f->ini) * sizeof (float) //número de bytes
            );
        }
    }
    fim = (f->ini + f->n) % f->dim; //procurando um elemento com posição livre
    f->vet[fim] = v; //inserindo elemento
    f->n++; //aumentando o número de elementos em um
}
float fila_retira (Fila* f){
    float v;
    v = f->vet[f->ini]; //Acessa o primeiro elemento da fila
    f->ini = (f->ini + 1) % f->dim; // Coloca o ínicio para o próximo elemento
    f->n--; //Decrementa o número que representa a quantidade de elementos do vetor
    return v; //Retorna o elemento excluído
}

int fila_vazia (Fila* f){ 
    return (f->n == 0); // Verifica se a lista esa vazia
}
void fila_libera (Fila* f){
    free(f->vet); //libera a memória alocada do vetor
    free(f); //Libera a memória alocada da fila
}

void fila_imprime (Fila* f){
    for(int i = 0;i < f->n;i++)
        printf("Elemento %i : %f\n",i,f->vet[f->ini+i]);
}
