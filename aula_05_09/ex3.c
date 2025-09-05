#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int palindromo(char nomes[])
{
  
  int i, j;
  j = strlen(nomes)-1;
  for(i=0; i!=j ; i++)
  {
    if(nomes[i] != nomes[j])
    {
      return 0;
    }
    j--;
  }
  return 1;
}

      
int main(){
  
  char palavra[40];
  printf("informe a palavra que deseja verificar palindromo: \n");
  scanf("%s", palavra);
  
  int res;
  
  res = palindromo(palavra);
  
  if (res == 1)
  {
    printf("eh palindromo");
  }
  else
  {
    printf("nao eh palindromo");
  }
  
  
}
