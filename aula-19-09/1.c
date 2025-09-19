#include <stdio.h>

void produtoEscalar(int v1[], int v2[], int v3[], int *cont)
{
    int i, j;
    float mult=0;


    for(i = 0; i < 3; i++)
    {
            v3[*cont] = v1[i] * v2[i]; 
            (*cont)++;
    }

}




int main()
{
    int cont = 0;
    int vetA[3] = {1,2,3};
    int vetB[3] = {5,6,7};
    int vetC[3];
  
    produtoEscalar(vetA, vetB, vetC, &cont);

    int i;
    printf("Vetor A:\n");
    for(i=0;i<3; i++)
        printf("%d |", vetA[i]);

    printf("\nVetor B:\n");
    for(i=0;i<3; i++)
        printf("%d |", vetB[i]);

    printf("\nVetor C:\n");
    for(i=0;i<3; i++)
        printf("%d |", vetC[i]);



}