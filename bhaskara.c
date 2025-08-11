#include <stdio.h>
#include <math.h>

float delta(float a,float b, float c)
{
  return (b * b) - 4*a*c; 
}

float raiz(float a, float b){
  
    return (-b) / (2*a);
}

void raizes (float a, float b, float *x1, float *x2, float res) {
  *x1 = (-b + sqrt(res)) / (2*a); 
  *x2= (-b-sqrt(res)) / (2*a); 
}


int main(){
  float a, b,c, x1, x2, res , x ;
  
  printf("Calculando Bhaskara:\n");

  do{
  printf("Digite o valor de a (a tem que ser diferente de zero):\n ");
  scanf("%f", &a); 
  }while(a == 0); 

  printf("Digite o valor de b:\n ");
  scanf("%f", &b); 

  printf("Digite o valor de c:\n ");
  scanf("%f", &c); 
  
  res = delta(a,b,c);
  if (res > 0){
     raizes(a,b,&x1, &x2, res);
     printf("x1 = %.f" , x1);
     printf("x2 = %.f", x2);
  }
  else if(res == 0){
    x = raiz(a,b);
    printf(" Raiz: %.f " , x); 
  }
  else{
    printf("Não existe raiz");
    }




}
