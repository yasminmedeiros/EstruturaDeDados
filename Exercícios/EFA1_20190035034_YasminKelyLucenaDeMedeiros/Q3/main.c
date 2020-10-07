#include <stdio.h>
#include "matriz.h"

int main(){

    MATRIZ *m = cria_matriz(2,2);

    /* int linha, coluna;
    float valor;
    */
    /* printf("Digite qual linha quer adicionar o elemento: (apartir de 1) ");
    scanf("%i", &linha);
    printf("Digite qual coluna quer adicionar o elemento: (apartir de 1) ");
    scanf("%i", &coluna);
    printf("Qual valor deseja adicionar: ");
    scanf("%f", &valor); */


    printf("%i\n", atribui_elemento(m,3,1,6));
    printf("%i\n", atribui_elemento(m,1,2,5));


    printf("%.f\n", acessar_elemento(m,1,1));
    printf("%.f\n", acessar_elemento(m,1,2));

    print_matriz(m);

    return 0;
}