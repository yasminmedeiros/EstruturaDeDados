#include <stdio.h>
#include "matriz.h"

int main(){

    Matriz *matriz = criaMatriz(5,5);

    

    printf("%s\n", atribuiElemento(matriz,3,1,8) ? "Adicionado\n" : "Dado Inexistente\n");
    printf("%s\n", atribuiElemento(matriz,5,2,5) ? "Adicionado\n" : "Dado Inexistente\n");
    printf("%s\n", atribuiElemento(matriz,2,2,2) ? "Adicionado\n" : "Dado Inexistente\n");
    printf("%s\n", atribuiElemento(matriz,8,3,3) ? "Adicionado\n" : "Dado Inexistente\n");
    printf("%s\n", atribuiElemento(matriz,1,1,5) ? "Adicionado\n" : "Dado Inexistente\n");

    printMatriz(matriz);
    
    printf("Elemento da posicao: %d\n", acessarElemento(matriz,2,1));
    printf("Elemento da posicao: %d\n", acessarElemento(matriz,3,1));
    printf("Elemento da posicao: %d\n", acessarElemento(matriz,2,2));

    printf("\n");
    printf("%s\n", removerElemento(matriz,3,1) ? "Removido" : "Dado Inexistente\n");
    printf("%s\n", removerElemento(matriz,10,3) ? "Removido" : "Dado Inexistente\n");
    printf("%s\n", removerElemento(matriz,13,1) ? "Removido" : "Dado Inexistente\n");
    
    printMatriz(matriz);
    liberaMatriz(matriz);

    return 0;
}