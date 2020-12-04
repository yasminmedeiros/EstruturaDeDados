#include <stdio.h>
#include <math.h>

int main (void){
    float a,b,c;

    printf("Digite a ");
    scanf("%f",&a);
    printf("Digite b ");
    scanf("%f",&b);
    int x, soma = 0;

    for (x = a;x<=b;x++){
        soma+=x;
    }
    printf("%d",soma);
    return 0;

}