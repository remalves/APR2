#include <stdio.h>

int main(){
   int x=1;
   int y=2;
   int z = 3;
   char a = 'a';
   char b = 'b';
   char num = '1';
   char num2 = '1';
   char j = 'j';
   char j2 = 'j';

   printf("%d > %d = %d",x,y, x>y);
   printf("\n%d == %d = %d",z,y, z == 2);
   printf("\n%d == %d = %d",z,y, z >= 2);
   printf("\n\'%c\' < \'%c\' = %d", a,b, a<b);
   printf("\n\'%c\' == \'%c\' = %d", num,num2, num == num2);
   printf("\n\'%c\' != \'%c\' = %d", j, j2, j!=j2);

/*   if ( (x > y) == 0)
   printf("Falso!");
    else
    printf("Verdadeiro!");*/


}