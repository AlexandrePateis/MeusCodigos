#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>


typedef struct pilha
{
	int num, comodo;
	struct pilha *topo;
}pilhaNum;

int menu ()
{
	printf("ESSE PROGRAMA SERVE PARA CONTROLE DA QUANTIDADE DE PRATOS MOVIDOS PARA DETERMINADO ANDAR.\n\n");
	printf("O programa é bem simples, se liga nas regras!!\n");
	printf("1° Passo: O programa irá solicitar a você quantos pratos serão enviados.\n");
	printf("2° Passo: O programa irá perguntar a você em qual andar o  pratos serão levados.\n");
	printf("3° Passo: Para encerrar, basta seguir as intruções ditar pelo próprio programa.\n");
	printf("\n");
	printf("Para inicicar o programa, digite qualquer número e em seguida pressione 'ENTER'\n");
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, countCozinha=0, countPrimeiroAndar=0, countSegundoAndar=0, re, op=0, pl=0;
	pilhaNum *andar, *flagAndar;
	andar = (pilhaNum*) malloc(sizeof(pilhaNum));
	
	if(andar == NULL)
	{
		printf("\nMEMORIA NAO ALOCADA!!");
		return 0;
	}
	
	andar->topo = NULL;
	
	menu();
	
	scanf("%d", &op);
	system("cls");
	if(op!=16541951984){

	do
	{
		printf("\nDIGITE A QUATIDADE DE PRATOS QUE SERÁ ENVIADO: ");
		scanf(" %d", &num);
		
		if(num != 0)
		{
			do{
		
			printf("\nPara qual andar?\n1-Cozinha\n2-Primeiro Andar\n3-Segundo Andar\n");
			scanf(" %d", &andar->comodo);
			if(andar->comodo<0 || andar->comodo>3)
			{
				printf("ESSE ANDAR NÃO EXISTE.\nDIGITE NOVAMENTE.\n");
			}
			}while(andar->comodo<0 || andar->comodo>3);
			andar->num = num;
			flagAndar = andar;
			andar = (pilhaNum*) malloc(sizeof(pilhaNum)); 
			andar->topo = flagAndar; 
			printf("Deseja adicionar mais pratos ?\n0-NAO\n1-SIM\n");
			scanf("%d", &pl);
		}
	
	}while(pl != 0);
		}
	andar = andar->topo;
	
	do 
	{
		if(andar->comodo == 1)
		{
			countCozinha += andar->num; 
		}
		else if(andar->comodo == 2)
		{
			countPrimeiroAndar += andar->num;
		}else
		{
			countSegundoAndar += andar->num;
		}
		
		andar = andar->topo;
	}
	while(andar != NULL);	
	system("cls");
	printf("---FORAM ENVIADOS %d PRATOS PARA A COZINHA.---\n", countCozinha);
	printf("---FORAM ENVIADOS %d PRATOS PARA O 1° ANDAR.---\n", countPrimeiroAndar);
	printf("---FORAM ENVIADOS %d PRATOS PARA 2° ANDAR .---\n\n", countSegundoAndar);
	do{

	printf("Dseja repetir novamente o programa?\n1-SIM\n2-NAO\n");
	scanf("%d", &re);
	}while(re>2 || re<0);
	if(re==1)
	{
		main();
	}else
	{
		printf("\n----PRGRAMA FINALIZADO, OBRIGADO POR CONFIAR NA TECNOLOGIA \\O/ !!---- \n");
		return 0;
	}
	free(andar);
	free(flagAndar);
	
	
	return 0;
}
