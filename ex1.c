#include <stdio.h>
#define max_jog 3
#define max_times 2

int main(){
    int i, j, idade, soma, menor_idade,total_jogadores ;
    float peso, altura, media_altura, soma_altura, peso_80, media_idade, porc;
    
    for (i=1;i<=max_times;i++)
    { 
	      printf("\nTime %d", i);
	    
	      for (j=1; j <= max_jog; j++){ 
	      
		printf("\nIdade do jogador %d: ", j);
	    scanf("%d", &idade);
	        
		  if (idade < 18)
		  { menor_idade+=1; 
		    soma+=idade;  
		  }
		  else{
		    soma+=idade; 
		  }
		  printf("\nAltura do jogador %d do time %d: ",j, i);
		  scanf("%f", &altura);
		  soma_altura+=altura; 
		  
		  printf("\nPeso do jogador %d: ", j);
		  scanf("%f", &peso);
		  if(peso>80)
		      peso_80+=1;
    }
      
      printf("\nJogadores com menos de 18 do time %d: %d",i, menor_idade);
      media_idade = soma/ max_jog;
      printf("\nMedia de idade dos jogadores do time %d: %.2f",i,media_idade);


    }
      total_jogadores = max_jog*max_times;
      porc = (peso_80/ total_jogadores) * 100; 
      printf("\nPorcentagem de jogadores de todos os times com mais de 80kg: %f", porc); 
      
      media_altura=soma_altura/ total_jogadores;
      printf("\nAltura media de todos os jogados do campeonato: %f" , media_altura);
      
}
