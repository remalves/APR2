#include <stdio.h>

long int fatorial(long int N)
{
  if (N == 0 || N == 1)
      return 1;
  else
      return N * fatorial(N-1);
}


double calcularSerie(int num_termos)
{
    int numerador = 100;
    long int denominador = 0;
    double soma = 0;
    int cont = 1;
    printf("\nSerie: ");
    while(cont <= num_termos)
    {
        printf("%d\/%ld! + ", numerador, denominador);
        
        soma+=numerador/fatorial(denominador);//chamada da função que calcula o fatorial do denominador
        
        numerador--;
        denominador++;
        cont++;
    }
    
}

int main()
{ 
    int num_termos = 8;
    double soma = 0;
    soma =  calcularSerie(num_termos);
    printf("Soma = %.2lf", soma);
  
}
