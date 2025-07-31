#include <stdio.h>

int main(){
    int n1; 
    printf("Digite um valor inteiro:\n ");
    scanf("%d", &n1);
    //Estrutura condicional composta
    if(n1>=0)
    printf("Numero positivo!");
    else
    printf("Numero negativo!");

    //Estrutura condicional composta - com bloco de comandos
    if(n1>=0){
    printf("Comando 1");
    printf("Comando 2");
    printf("Comando 3");
    }
    else{
        printf("Comando 4");
        printf("Comando 5");
    
    }
}
