#include <stdio.h>

int main (void){
    unsigned int raio;
    printf("Digite um valor positivo para o raio:\n");
    scanf("%d", &raio);
    printf("A area e de: %2.f", 2*3.14*raio);
    return 0;
}