#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 5


void preencher_nomes(int tam, char nomes[][40]){
      int i;
      printf("Digite os nomes:\n");
      for (i=0; i<tam; i++){
        fgets(nomes[i],40,stdin);
        //remove o \n usando 
        nomes[i][strcspn(nomes[i] , "\n")] = '\0';
      }
}

void imprimir_nomes(int tam, char nomes[][40]){
  int i;
  for (i=0; i<tam; i++)
  {
    puts(nomes[i]);
  }
}

void ordenar_vetor(int tam, char nomes[][40]){
  int i,j;
  char aux[40];
  for(i=0; i < tam-1;i++) //tam - 1 
  {
    for(j=i+1; j<tam; j++)
    {
        if(strcmp(nomes[i], nomes[j]) > 0)
        {
          strcpy(aux,nomes[i]);
          strcpy(nomes[i], nomes[j]);
          strcpy(nomes[j],aux);
        }
            
      }
    }
  } 


      
int main(){
  
  char nomes[max][40];
  preencher_nomes(max,nomes); 
  printf("Numeros ordenados: \n");
  ordenar_vetor(max, nomes);
  imprimir_nomes(max, nomes);
  
}
  

