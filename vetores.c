#include <stdio.h>
#define max 5


int main()
{
  int vet[max], i;
  char nome[40];
  
  
  printf("Digite os valores do vetor: \n");
  for (i=0; i<max; i++)
  {
    printf("\nEntre com um numero: ");
    scanf("%d", &vet[i]);
    
      printf("\nEntre com o nome: ");
      scanf("%s", nome);
  }
  printf("\nElementos do vetor: \n");
  for (i=0; i<max; i++)
  {   
      printf("%d | ",vet[i]);
      printf("%s", nome);

  }
  
}

