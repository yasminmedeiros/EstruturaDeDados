#include <stdio.h>
#include <math.h>

int main (void){
    int a;

    printf("Digite a ");
    scanf("%d",&a);

    int contador=0, i;

    for (i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            contador++;
            break;
        }
    }
    if(contador==0)
        printf("É PRIMO");
    else
        printf("NÃO É PRIMO");
    return 0;

}