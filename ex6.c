#include <stdio.h>

int main(){

float n, i, x, soma;

printf("Informe um numero: ");
scanf("%f", &n);
soma =0;
i=1;
x=1;
while(i <= n){
  soma += i/x;
  i++;
  x= x+2;
  printf("\t%.0f/%.0f",i,x);
}

printf("\tSOMA: %.2f", soma); 

}
