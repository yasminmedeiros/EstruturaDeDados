#include <stdio.h>

int main (void){
    int a,b;

    printf("Digite o numero de dimensões da matriz ");
    scanf("%d",&a);
    printf("Digite o numero de elementos da matriz ");
    scanf("%d",&b);

    int matriz[a][b];

    int i,j;

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("\nDigite o %d %d numero: ",i+1, j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j< b; j++) {
        printf("\nO %d %d numero é %d ",i,j,matriz[i][j]);
        }
    }
    
    return 0;

}