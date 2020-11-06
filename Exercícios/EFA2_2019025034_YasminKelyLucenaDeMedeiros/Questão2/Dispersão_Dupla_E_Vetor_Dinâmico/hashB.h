#ifndef HASH
#define HASH

typedef struct pessoa Pessoa;
typedef struct hash Hash;

static int hash (long int cpf, Hash* tabela);
static void redimensiona (Hash* tabela);
Hash* create_hash();
void print_Pessoa(Pessoa* a);
int remove_hash(Hash* tabela, long int cpf);
Pessoa* insert_hash(Hash* tabela, Pessoa* pessoa);
Pessoa* search_hash(Hash* tabela, long int cpf);
Pessoa* init_Pessoa(long int cpf,char* nome,char sexo,int idade);
#endif