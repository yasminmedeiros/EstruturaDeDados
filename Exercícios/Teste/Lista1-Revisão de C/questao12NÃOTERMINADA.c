#include <stdio.h>
#include <math.h>

int* inversa(int n, int *vetor){
    int vet[n];
    int x, i=0;
    for ( x=n; x<=0;x--){
        vet[i]=vetor[x];
    }
    
    return &vet;
}

int main (void){
    int a;

    printf("Digite o tamanho do vetor que você deseja ");
    scanf("%d",&a);

    int vetor[a];

    int i;

    for (i = 0; i < a; i++) {
        printf("\nDigite o %d numero: ",i + 1);
        scanf("%d",&vetor[i]);
    }
    int *vet = vetor;
    int *inv = inversa(a,vet);
    for (i = 0; i < a; i++) {
        printf("\nO %d numero é %d ",i,inv[i]);
        
    }
    
    return 0;

}