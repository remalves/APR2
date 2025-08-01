/*ax2 + bx + c = 0 Obs: a deve ser diferente de 0
delta = b2 - 4 * a * c
Se delta < 0, não existe raiz real
Se delta = 0, existe uma raiz real
x = (-b) / (2 * a)
Se delta > 0, existem duas raízes reais
x1 = (- b + raiz quadrada de delta) / (2 * a)
x2 = (- b - raiz quadrada de delta) / (2 * a)*/


#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,delta;
    double x, x1, x2;
    printf("Calculadora Bhaskara"); 
    printf("\nDigite um valor para a: ");
    scanf("%lf", &a);
    printf("\nDigite um valor para b: ");
    scanf("%lf", &b);
    printf("\nDigite um valor para c: ");
    scanf("%lf", &c);

    if (a != 0 ){
        delta = pow(b,2) - (4 * a * c);
        if (delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("\nx1 = %.1lf e x2 = %.1lf", x1, x2);
        }
        else if (delta == 0){
            x=(-b)/(2*a);
            printf("\nExiste 1 raiz real = %.1lf", x);
        }
        else{
            printf("\nNao tem raiz real");  
        }
    }
    else{
        printf("\nA deve ser diferente de zero");
    }
}


