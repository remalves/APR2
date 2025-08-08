#include <stdio.h>
int main(){

float notas;
int maiorIgual6, maior4Menor6, menorq4;
maiorIgual6=0;
maior4Menor6 = 0;
menorq4 = 0;

notas = 0; 
while(notas >= 0){
  printf("\nDigite as notas de todos os alunos: ");
  scanf("%f", &notas);
  if(notas >= 6)
    maiorIgual6+=1; 
  else if (notas>=4 && notas < 6)
    maior4Menor6+=1;
  else
    menorq4+=1;
}

printf("\nNotas maiores ou igual a 6: %d",maiorIgual6);
printf("\nNotas maiores ou iguais a 4.0 e menores que 6.0: %d", maior4Menor6);
printf("\nNotas menores que 4.0: %d", menorq4);


}
