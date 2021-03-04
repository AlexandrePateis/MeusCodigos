#include<stdio.h>
#include<stdlib.h>

typedef struct filas
{
	int num;
	struct filas *prox;
	 
}fila;

int main ()
{
	fila *inicio, *no;
	inicio=(filas*)malloc(sizeof(filas));
	no=inicio;
	
	if(inicio == NULL)
	{
		printf("Memoria nao alocada.\n");
		return 0; 
	}
	
	int cont=2, maior=-99999, menor=99999, soma, aux=0;
	float media;
	
	do
	{
		printf("DIGITE UM NUMERO: ");
		scanf(" %d", &no->num);
		if(no->num>maior)
		{
		maior=no->num;
		}
		if(no->num<menor)
		{
		menor=no->num;
		}
		soma=soma+no->num;
	
		aux++;
		printf("Deseja digitar outro numero?\n1-SIM\n2-NAO");
		printf("\n");
		scanf("%d", &cont);
		
		if(cont!=2)
		{
			no->prox=(fila*)malloc(sizeof(fila));
			no=no->prox;
			
		}else 
		{
			no->prox=NULL;
			break;
		}
		
	}while(cont!=2);
	
	
	no=inicio;
	do{
		
	printf("Deseja excluir o primeiro numero?\n1-SIM\n2-NAO\n");
	scanf("%d", &cont);
	if(cont==1)
	{
		inicio=no->prox;
		no=no->prox;
	}
	if(inicio==NULL)
	{
		main();
	}
		
		
	}while(cont!=2);
	
	no=inicio;
	printf("NUMEROS DIGITADOR: ");
	do
	{
		
		printf("%d ", no->num);
		
	no=no->prox;	
	}while(no!=NULL);
	
	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);
	media=soma/aux;
	printf("Media numero: %.2f\n", media);
	
	
}
