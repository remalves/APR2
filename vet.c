#include <stdio.h> 
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
  printf("\nElementos do vetor: \n");
  for(i=0;i<tam;i++)
    printf("%d | ", v[i]);
}

void funcao(int v[],int v1[],int v0[], int tam, int *tam_pos, int *tam_neg)
{
  int i;
  *tam_pos = 0;
  *tam_neg = 0;
  
  for(i=0;i<tam;i++)
  { 
    
    if(v[i] >= 0)
    {
      v1[*tam_pos] = v[i];
      (*tam_pos)++;
    }else
    {
      v0[*tam_neg] = v[i];
      (*tam_neg)++;
    }
  }
}


int main()
{ 
  int tam = 8; 
  int tam_pos, tam_neg;
  int vet[tam],vet_pos[tam], vet_neg[tam];
  
  preencher_vet(vet, tam);
  imprime_vet(vet,tam);
  
  funcao(vet,vet_pos,vet_neg,tam,&tam_pos, &tam_neg);
  printf("\nVetor positivos:");
  imprime_vet(vet_pos,tam_pos);
  printf("\nVetor Negativos:");
  imprime_vet(vet_neg,tam_neg);
}
