
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  //Biblioteca necessária para usar as funções strcpy e strlen
typedef struct 
{
    char Nome[50];
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura

}Pessoa;
void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
  printf("Nome %s Idade: %d  Peso: %f Altura: %f", P.Nome, P.Idade, P.Peso, P.Altura);
  printf(" IMC %f\n", P.Peso/(P.Altura*P.Altura));
}

int main(){
    int num;
    printf("DIGITE O NUMERO DE PESSOAS QUE DESEJA CADASTRAR: ");
    scanf("%d", &num);
    Pessoa x[num];
    int i;
    for (i=0;i<num;i++){
        printf("Cadastro %d", i);
        printf("\nNome: ");
        scanf("%s", x[i].Nome);
        printf("\nIdade: ");
        scanf("%d",&x[i].Idade);
        printf("\nPeso: ");
        scanf("%f",&x[i].Peso);
        printf("\nAltura: ");
        scanf("%f",&x[i].Altura);

    }
    for (i=0;i<num;i++){
        printf("\n");
        ImprimePessoa(x[i]);
        printf("\n");
    }
}