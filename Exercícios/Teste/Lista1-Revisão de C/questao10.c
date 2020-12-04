#include <stdio.h>
#include <math.h>

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
    for (i = 0; i < a; i++) {
        printf("\nO %d numero é %d ",i,vetor[i]);
        
    }
    
    return 0;

}