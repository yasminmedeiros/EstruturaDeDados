#include <stdio.h>

int main (void){
    float refri = 1.5, fatia = 3.0, taxa=0.1;
    int numRefri, numPizza, numPessoas;
    printf("Digite o número de refrigerantes pedidos");
    scanf("%d",&numRefri);
    printf("Digite o número de pizzas pedidos");
    scanf("%d",&numPizza);
    printf("Digite o número de pessoas na mesa");
    scanf("%d",&numPessoas);
    printf("O total sem a taxa é de %2.f", numRefri*refri + numPizza*fatia);
    printf("O total com a taxa é de %2.f", (numRefri*refri + numPizza*fatia)*(1+taxa));
    printf("O valor a ser pago por cada pessoa é de %2.f", (numRefri*refri + numPizza*fatia)*(1+taxa)/numPessoas);

    return 0;
}