#include <stdio.h>

int main(){
    int i=1, a=0, b=1, aux;
  
    printf("\t%d \t%d", a,b);
      while(i<=6)
      {
         aux = a+b;
         a=b;
         b=aux;
         printf("\t%d\n", aux);
        i++;
      }

}


