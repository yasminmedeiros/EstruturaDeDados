#include <stdio.h>
#include "hashB.h"

int main(){

    Hash* tab = create_hash();

    Pessoa *p1 = init_Pessoa(12919902407, "Yasmin", 'F',19);
    Pessoa *p2 = init_Pessoa(12345678910, "Lucas",'M',14);
    Pessoa *p3 = init_Pessoa(12457689098, "Adriano",'M',14);
    Pessoa *p4 = init_Pessoa(56239813801, "Lucia", 'F',10);
    
    //INSERINDO
    insert_hash(tab, p1);
    insert_hash(tab, p2);
    insert_hash(tab, p3);
    insert_hash(tab, p4);

    //PESQUISANDO
    Pessoa* a;
    a = search_hash(tab, 12919902407);
    if (a != NULL)
        print_Pessoa(a);
    else
        printf("CPF não encontrado!\n");
    
    a = search_hash(tab, 98712312341);

    if (a != NULL)
        print_Pessoa(a);
    else
        printf("CPF não encontrado!\n");


    //REMOVENDO

    printf("%s", remove_hash(tab, 12919902407) ? "Removido\n" : "CPF não encontrado!\n");

    a = search_hash(tab, 12883424462);
    if (a != NULL)
        print_Pessoa(a);
    else
        printf("CPF não encontrado!\n");

    
    return 0;
}