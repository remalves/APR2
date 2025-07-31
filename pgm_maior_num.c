#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;
    printf("\nDigite dois numeros: ");
    scanf("%f%f", &num1, &num2);

    if (num1>num2)
        printf("\nO maior numero: %.2f", num1);
    else
        if (num2>num1)
            printf("\nO maior numero: %.2f", num2);
        else
        printf("\nOs numeros sao iguais");
    system("Pause");
}
