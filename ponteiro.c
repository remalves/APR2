#include <stdio.h>

void soma (int i, int j, int *k){
  *k = i +j;
}


int main(){
  int n1,n2,s=0;
  printf("N1 = ");
  scanf("%d", &n1);
  printf("N2 = ");
  scanf("%d", &n2);
  soma(n1,n2,&s);
  printf("Soma = %d\n", s);




}
