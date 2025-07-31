/* Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo. Seforem, verifique se é um triângulo equilátero,
isósceles ou escaleno. Se não formarem umtriângulo, escreva uma mensagem informando quenão é triângulo. 
Considere que: 
– O comprimento de cada lado do triângulo é menor do quea soma dos outros dois lados. 
– O triângulo equilátero tem três lados iguais. 
– O triângulo isósceles tem o comprimento de dois lados iguais. 
– O triângulo escaleno tem os três lados diferentes.*/

#include <stdio.h>
int main(){
    int x, y, z;
    printf("\nDigite um valor para os 3 lados do triangulo e verifique o tipo do triangulo: \n");
    scanf("%d%d%d", &x, &y, &z);

    if ( (y+z) > x && (x+y) > z && (z+x) > y ){
        if(x == y && y== z)
            printf("\nEquilatero");
        else if(x == y || y == z || z == x)
            printf("\nIsosceles");
        else
            printf("\nEscaleno");
    }  
    else
        printf("\nNao eh um triangulo");

} 