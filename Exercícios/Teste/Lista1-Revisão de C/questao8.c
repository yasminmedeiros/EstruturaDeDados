#include <stdio.h>
#include <math.h>

int main (void){
    float a;

    printf("Digite a ");
    scanf("%f",&a);
    int soma = 1;
    for (int x = 1;x<=a;x++){
        soma = soma *x;
    }
    printf("%d",soma);
    return 0;

}