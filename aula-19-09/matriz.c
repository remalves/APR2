#include <stdio.h>


void matriz_nula(int n, int m, int mat[][m], int *lin_nulas, int *col_nulas)
{
  int i,j, eh_nula;
  //verificar linhas nulas
  
  for(i=0; i<n;i++)
  {  
    eh_nula = 1;
    for(j = 0; j < m && eh_nula; j++)
    {
        if(mat[i][j] != 0)
            eh_nula = 0;
        
    }
  }
  if(eh_nula)
    (*lin_nulas)++;

  //verificar colunas nulas
  //colunas
  for(i=0; i < m; i++)
  {  
    eh_nula = 1;
    //linhas
    for(j = 0 ; j < n ;j++)
    {
        if(mat[j][i] != 0) eh_nula = 0;
    }
  }
  if(eh_nula)
    (*lin_nulas)++;

  

}




int main()
{
  int matriz[3][2] = {{16,0}, {0,0}, {69,0}};
  int lin_nulas = 0;
  int col_nulas = 0;

  matriz_nula(3,2,matriz,&lin_nulas,&col_nulas);

  printf("\nLinhas Nulas");
  printf("%d \n", lin_nulas );

  printf("\nColunas Nulas");
  printf("%d\n", col_nulas);
}