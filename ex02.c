#include <stdio.h>
#define N 5

void preencher_vet(int v[], int tam)
{
  int i;
  printf("Informe os valores inteiros para o vetor\n");
  for(i=0; i<tam; i++)
    scanf("%d",&v[i]);
}
void imprime_vet(int v[],int tam)
{
  int i;
  printf("Elementos do vetor: \n");
  for(i=0;i<tam;i++)
    printf("%d | ", v[i]);
}
int soma_vet(int v[], int tam)
{ 
  int i, soma=0;
  for(i=0; i<tam; i++)
    soma+=v[i];
  return soma;
}

/*imprimir invertido
//aux = v[tam-1-i]; 
printf("%d |",aux);*/

void invert_vet(int v[], int tam)
{
  int i,j,aux;
  j = tam-1;
  for(i=0; i<tam; i++)
  {
      aux = v[i];
      v[i]=v[j];
      v[j] = aux;
      j--;
  }   
}

int main()
{ 
  int vetor[N], result;
  //chamada da função p/ preencher o vetor
  preencher_vet(vetor, N);
  
  //chamada da função p/ imprimir vetor
  imprime_vet(vetor, N);
  
  //chamada função soma
  result = soma_vet(vetor, N);
  printf("\nSoma de todos os elementos do vetor: %d\n", result);
  
  //chamada da função p/ inverter vetor
    invert_vet(vetor,N);
    imprime_vet(vetor, N);
    
  }



