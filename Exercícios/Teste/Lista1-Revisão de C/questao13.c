#include <stdio.h>
#include <math.h>

int main (void){
    int a;

    printf("Digite o tamanho do vetor que você deseja ");
    scanf("%d",&a);

    int vetor[a];

    int i;
    int me,ma;
    for (i = 0; i < a; i++) {
        if(i==0){
            printf("\nDigite o %d numero: ",i + 1);
            scanf("%d",&vetor[i]);
            me=vetor[i];
            ma=vetor[i];
    
        }else{
            printf("\nDigite o %d numero: ",i + 1);
            scanf("%d",&vetor[i]);
            if(vetor[i]>ma)
                ma=vetor[i];
            if(vetor[i]<me)
                me=vetor[i];
       
        }
    }
    printf("Maior: %d, menor: %d",ma,me);
    
    return 0;

}