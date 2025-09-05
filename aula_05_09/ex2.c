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

void procurar_letra(int tam, char nomes[][40], char letra)
{
  int i, j,achou;
  for(i=0;i<tam;i++)
  {
    achou =0;
    for(j=0; nomes[i][j]!='\0' && !achou; j++)
    {
      if (nomes[i][j] == letra)
      {
        puts(nomes[i]);
        achou = 1; //ou continue;
      }
  
  }
}
}

int main(){
  
  char nomes[max][40], letra, palavra[40];
  preencher_nomes(max,nomes); 

  printf("informe a letra que deseja buscar: \n");
  scanf("%s", &letra);
  
  procurar_letra(max, nomes, letra);
  
}
  

