#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  int idade;
  char sexo;
  char nome[40];
}Pessoas;

typedef char string[100];

void preencher_vet(Pessoas vetor[], int tam)
{
  int i;
  for(i=0; i<tam;i++)
  {
      puts("\nDigite o nome da pessoa: ");
      fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
      vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';
      
      puts("\nDigite o sexo: ");
      scanf(" %c", &vetor[i].sexo);
      getchar();
      
      puts("\nDigite a idade: ");
      scanf("%d", &vetor[i].idade);
      getchar();
  }

}


void imprimir_vetor(Pessoas vetor[], int tam)
{
  int i;
  for (i=0; i<tam; i++)
  {
    printf("Nome: %s \n", vetor[i].nome);
    printf("Idade: %d\n ", vetor[i].idade);
    printf("Sexo: %c\n", vetor[i].sexo);
  }
}


int main()
{
  Pessoas vet_pessoas[3]; 
  string nome;
  preencher_vet(vet_pessoas, 3);
  imprimir_vetor(vet_pessoas, 3);

}
