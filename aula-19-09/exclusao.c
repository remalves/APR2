#include <stdio.h>



int excluir(int vetor[], int *cont, int X) 
{
    
    int i,j;
    if(*cont > 0)
    {
        for(i=0; i<*cont; i++)
        {
            if(X == vetor[i])
            {
                for(j = i; j < (*cont)-1; j++)
                    vetor[j] = vetor[j+1];

                (*cont)--; 
                return 1; 
            }
        }
    }
    return 0;
}



int main()
{
    int vet[500], i;
    int cont = 10;
    
    //inserção dos elementos
    for(i=0;i<10;i++)
        vet[i] = i*2;

    printf("\nElementos do vetor\n");
    for(i=0;i<10;i++)
        printf("%d | \n", vet[i]);


    if(excluir(vet, &cont, 7) )
        printf("\nExclusão feita com sucesso!\n");

    else
        printf("\nNao exclui com sucesso\n");


}


