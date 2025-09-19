#include <stdio.h>
#include <stdlib.h>

int inserir_ordenado(int vetor[], int *cont, int x)
{
    int i,j;
    if(*cont < 500)
    {
        //numero de x é menor que cont
        for(i = 0; i < *cont; i++)
        {
            if( x < vetor[i])
            {   
                for(j = *cont; j>i; j--)
                    vetor[j] = vetor[j-1];
                
                vetor[i] = x; 
                (*cont)++;
                return 1;

            }
        }
        vetor[*cont] = x;
        (*cont)++;
        return 1;

    }
    else
        //não tem espaço no vetor
        return 0;
}




int main()
{
    int vet[500], i;
    int cont = 10;
    
    //inserção dos elementos
    for(i=0;i<10;i++)
        vet[i] = i*2;

    printf("\nElementos do vetor");
    for(i=0;i<10;i++)
        printf("%d | \n", vet[i]);

    printf("\nInserir ordenado: ");

    if(inserir_ordenado(vet, &cont, 7) )
        printf("\nInseriu com sucesso!");

    else
        printf("\n Nao inseriu com sucesso");

    printf("\nElementos do vetor ordenados: \n");
    for(i=0;i<10;i++)
        printf("%d | \n", vet[i]);

    
}