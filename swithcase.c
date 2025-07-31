#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:printf("\nNumero igual a 1\n");
            break;
        case 2: printf("\nNumero igual a 2\n");
            break;
        default:printf("\nNumero diferente de 1 e de 2\n");
    }
    system("Pause");
}