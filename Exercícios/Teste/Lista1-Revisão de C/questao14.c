#include <stdio.h>
#include <math.h>

int main (void){
    int a;

    printf("Digite o tamanho do vetor que você deseja ");
    scanf("%d",&a);

    int vetor[a];

    int i;
    for (i = 0; i < a; i++) {
        if(i== a-1 ){
            printf("\nDigite o %d numero: ",i + 1);
            scanf("%d",&vetor[0]);
    
        }else{
            printf("\nDigite o %d numero: ",i + 1);
            scanf("%d",&vetor[i+1]);
        }
    }
    for (i = 0; i < a; i++) {
        printf("%d",vetor[i]);
    }
    
    return 0;
}