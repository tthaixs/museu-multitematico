#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	
	FILE *pont_arq;
	
	char visita_tema [5], achou_tema [5], aprofundar_tema[5], gostou_mult[5];
	
	pont_arq = fopen("resultado_quest2.txt", "a");
	
	
	if(pont_arq == NULL)
	 {
	 	printf("Erro na abertura do arquivo!");
	    return 1;
	 }	
	
	else
    	{
	
    printf("\t QUESTIONARIO DE SATISFACAO \n\n");
	
	printf("Esta e uma pesquisa de saticao para que possamos melhorar os temas exibidos em nosso museu \ne trazer novos temas que agradem nossos visitantes.\n\n");

	printf("O questinario segue as diretrizes da LGPD - Lei Geral de Protecao de Dados \ne nao coleta informacoes sensiveis dos visitantes.\n\n");
	
	
	
	printf(" \t Que tema voce vistou? \n");
	
	printf(" \t [A] 100 anos da semana de arte moderna. \n");
    
	printf(" \t [B] 150 anos de Santos Dumout. \n");
    
	printf(" \t [C] Jogos Olimpicos de Paris 2024. \n");   
    
	printf(" \t [D] Historia de SP. \n");
	
	scanf("%s", &visita_tema);
	
	fprintf(pont_arq, "%s ,", &visita_tema);
	
	
	
	
	
    printf(" \t O que voce achou da exibicao deste tema? \n");
	
	printf(" \t [A] Excelente. \n");
    
	printf(" \t [B] Bom. \n");
    
	printf(" \t [C] Ruim. \n");   
    
	printf(" \t [D] Pessimo. \n");    
    
	scanf("%s", &achou_tema);
  
    fprintf(pont_arq, "%s ,", &achou_tema);
  
  
        
	printf(" \t Voce acha que este tema deve ser aprofundado ou gostaria de ver outro na proxima visita? \n");    
    
	printf(" \t [A] Gostaria que fosse aprofundado. \n");   
    
	printf(" \t [B] Gostaria que o tema fosse trocado. \n"); 
    
	scanf("%s", &aprofundar_tema);
    
    fprintf(pont_arq, "%s ,", &aprofundar_tema);
   
   
    
    
    printf(" \t Como foi sua experiencia em museu multitematico? \n");
    
	printf(" \t [A] Excelente. \n");
    
	printf(" \t [B] Bom. \n");
    
	printf(" \t [C] Ruim. \n");   
    
	printf(" \t [D] Pessimo. \n");
	
	scanf("%s", &gostou_mult);
	
	fprintf(pont_arq, "%s \n", &gostou_mult);
	
	
	
	printf(" \t Obrigada por responder, faremos as mudancas necessarias. \n");
    
	printf(" \t Ate a proxima visita!");
     }
     
    fclose(pont_arq); 
	return 0;
      
    
}