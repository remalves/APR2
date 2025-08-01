/*Faça um programa que receba dois números eexecute uma das operações listadas a seguir, deacordo com a escolha do usuário. Se for digitadauma opção inválida, mostre a mensagem de erro efinalize o programa. As opções são:
1. Primeiro número elevado ao segundo número;
2. Raiz quadrada de cada número;
3. Raiz cúbica de cada número;
4. Produto dos números;*/

#include <stdio.h>
#include <math.h>

int main(){
    int x,y,num;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);

    printf("\n\tOperacoes: ");
    printf("\n1-Primeiro numero elevado ao segundo numero");
    printf("\n2-Raiz quadrada de cada numero;");
    printf("\n3-Raiz cubica de cada numero"); 
    printf("\n4-Produto dos numeros");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\n%d ^ %d = %.2lf",x,y,pow(x,y));
        break;
    case 2:
        printf("\nraiz quadrada de %d = %.2lf", x, sqrt(x));
        printf("\nraiz quadrada de %d = %.2lf",y,sqrt(y));
        break;
    case 3:
        printf("\nraiz cubica de %d = %.2lf", x, cbrt(x));
        printf("\nraiz cubica de %d = %.2lf",y,cbrt(y));
        break;
    case 4:
        printf("Produto de %d x %d = %d", x, y, x*y); 
        break;
    default: 
        printf("Opcao invalida");
        break;
    }
}