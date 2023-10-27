#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     /*  
	 quant_blihetes= refere a quantidade de bilhetes que o cliente vai comprar
    coso_tema= refere ao CASE para escolha dos temas
    dia_escolhido= refere ao dia da semana escolhido pelo cliente 
    tipo_ingresso= refe ao tipo de ingresso escolhido pelo cliente
    */
    
    int quant_bilhetes, caso_tema, dia_escolhido, tipo_ingresso;
    float total;
    
	
       printf("---------------BILHETERIA---------------\n\n\n");
       
       printf("\t Escolha um tema: \n");
       
       printf("\t------------------------------------------\n");
       
       printf("\t TEMAS EM CARTAZ \n");
       
       printf("\t [1] 100 anos da semana de arte moderna \n");
       
       printf("\t [2] 150 anos de Santos Dumont \n");
       
       printf("\t [3] Jogos olimpicos de Paris 2024 \n");
       
       printf("\t [4] Historia de SP \n");
       
       printf("\t------------------------------------------\n");
       
       printf("\t Zero para sair:\n\n ");
       
       scanf("%d", &caso_tema);
       

     switch (caso_tema)
     
     {
     		default:
			
			printf("\t Opcao invalida.\n");
			
			case 1:
			
				printf("\t-------------------------------------------------\n");
				
				printf("\t Tema 1: 100 anos da semana de arte moderna \n");
				
				printf("\t Segunda-feira [1] \n");
				
				printf("\t Terca-feira [2] \n");
				
				printf("\t Quarta-feira [3] \n");
				
			    printf("\t Quinta-feira [4] \n");
			    
			    printf("\t Sexta-feira [5] \n");
			    
			    printf("\t Sabado [6] \n");
			    
				printf("\t Comprar bilhete para qual dia ? \n\n");
				
				printf("\t------------------------------------------------\n");
				
				scanf("%d",&dia_escolhido);
				
				   
				     if (dia_escolhido==1) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
						
					        
							printf("\tDia escolhido 1: Segunda-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao ha mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==2) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 2: Terca-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao ha mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==3) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 3: Quarta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao ha mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==4) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 4: Quinta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao ha mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==5) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 5: Sexta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao ha mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==6) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 6: Sabado\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				break;
				
		case 2:
			
			printf("\t-------------------------------------------------\n");
				
				printf("\t Tema 2: 150 anos de Santos Dumont \n");
				
				printf("\t Segunda-feira [1] \n");
				
				printf("\t Terca-feira [2] \n");
				
				printf("\t Quarta-feira [3] \n");
				
			    printf("\t Quinta-feira [4] \n");
			    
			    printf("\t Sexta-feira [5] \n");
			    
			    printf("\t Sabado [6] \n");
			    
				printf("\t Comprar bilhete para qual dia ? \n\n");
				
				printf("\t------------------------------------------------\n");
				
				scanf("%d",&dia_escolhido);
				
				   
				     if (dia_escolhido==1) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 1: Segunda-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==2) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 2: Terca-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==3) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 3: Quarta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==4) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 4: Quinta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==5) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 5: Sexta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==6) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");	
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 6: Sabado\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				break;
				
			case 3:
			
		        printf("\t-------------------------------------------------\n");
				
				printf("\t Tema 3: Jogos Olimpicos de Paris 2024 \n");
				
				printf("\t Segunda-feira [1] \n");
				
				printf("\t Terca-feira [2] \n");
				
				printf("\t Quarta-feira [3] \n");
				
			    printf("\t Quinta-feira [4] \n");
			    
			    printf("\t Sexta-feira [5] \n");
			    
			    printf("\t Sabado [6] \n");
			    
				printf("\t Comprar bilhete para qual dia ? \n\n");
				
				printf("\t------------------------------------------------\n");
				
				scanf("%d",&dia_escolhido);
				
				   
				     if (dia_escolhido==1) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 1: Segunda-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==2) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 2: Terca-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==3) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 3: Quarta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==4) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 4: Quinta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==5) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 5: Sexta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==6) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 6: Sabado\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				break;
				
			case 4:
				
				printf("\t-------------------------------------------------\n");
				
				printf("\t Tema 4: Historia de SP \n");
				
				printf("\t Segunda-feira [1] \n");
				
				printf("\t Terca-feira [2] \n");
				
				printf("\t Quarta-feira [3] \n");
				
			    printf("\t Quinta-feira [4] \n");
			    
			    printf("\t Sexta-feira [5] \n");
			    
			    printf("\t Sabado [6] \n");
			    
				printf("\t Comprar bilhete para qual dia ? \n\n");
				
				printf("\t------------------------------------------------\n");
				
				scanf("%d",&dia_escolhido);
				
				   
				     if (dia_escolhido==1) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 1: Segunda-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==2) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 2: Terca-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==3) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 3: Quarta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==4) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 4: Quinta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==5) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO : \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 5: Sexta-feira\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				    if (dia_escolhido==6) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%d",&quant_bilhetes);
						
						if (quant_bilhetes<=50) 
						{
					
							printf("\t------------------------------------------------\n");
							
							printf("\t TIPOS DE INGRESSO :  \n\n");
							
							printf("\t [1]Inteira: R$ 40,00  \n");
							
							printf("\t [2]Meia: R$ 20,00  \n");
							
							printf("\t [3]Isencao: R$ 0,00  \n");
							
							scanf("%d",&tipo_ingresso);
							
							printf("\t-----------------------------------------------\n");
						
							if (tipo_ingresso==1)
							{
								printf("\tTipo de Ingresso : INTEIRA \n\n");
								total=quant_bilhetes * 40;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==2)
							{
								printf("\tTipo de Ingresso : MEIA ");
								total=quant_bilhetes * 20;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							if (tipo_ingresso==3)
							{
								printf("\tTipo de Ingresso : ISENCAO ");
								total=quant_bilhetes * 0;
								printf("\tTotal = R$ %f \n\n", total);
							}
							
							
							printf("\tDia escolhido 6: Sabado\n\n");
							
							printf("\tSeu bilhete foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se. Uma boa exposicao para voce.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
				   }
				   
				break;
				   
	}
	
		system ("pause");
	
}
                    
