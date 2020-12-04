#include <stdio.h>

int main (void){
    float media [2];
    printf("Digite sua primeira nota: ");
    scanf("%d",&media[0]);
    printf("Digite sua segunda nota: ");
    scanf("%d",&media[1]);
    float m = (media[0]+ media[1])/2;
    if(media>=7)
        printf("\n APROVADO");
    else{
        printf("\nREPROVADO");
        printf("Precisa Tirar:%f",(21-media[0]-media[1]));
    }
    return 0;
    


}