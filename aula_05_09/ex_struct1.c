#include <stdio.h>
#include <string.h>
//antes das funções
struct Pessoa
  {
    int idade;
    char nome[40];
    char sexo;
  };


int main()
{
  struct Pessoa p1;
  p1.idade = 27;
  p1.sexo = 'F';
  strcpy(p1.nome, "Eloize");
  printf("Nome: %s", p1.nome);
  printf("\nSexo: %s", p1.sexo);
  printf("\nIdade: %d", p1.idade);
  

}
