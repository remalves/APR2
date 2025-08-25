#include <stdio.h>

void preenche_matriz(int lin, int col, int mat[][col])
{
  int i,j;
  for(i=0;i<lin;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("Digite o valor da linha %d e coluna %d: \n", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}

void imprimir_matriz(int lin,int col,int mat[][col])
{
    int i,j;
    for(i=0;i<lin;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%d", mat[i][j]);
    }
    printf("\n");
  }
}


int eh_simetrica(int lin, int col, int mat[][col])
{ 
  int i, j;
  for(i=0; i<lin; i++)
  {
    for(j=0;j<col;j++)
    {
      if(mat[i][j]!=mat[j][i])
        return 0;
  }
}
  return 1;
}

int main()
{ int linha = 3;
  int coluna = 3;
  int res;
  int matriz[linha][coluna];
  preenche_matriz(linha, coluna,matriz);
  imprimir_matriz(linha,coluna,matriz);
  
  res = eh_simetrica(linha,coluna,matriz);
  if(res==1)
    printf("Eh simetrica\n");
  else
    printf("Nao eh simetrica\n");
  
}
