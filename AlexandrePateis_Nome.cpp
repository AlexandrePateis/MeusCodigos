#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct nome 
{
	char letra[50];
	char aux[50];
}name;

int menu(){
	printf("Esse programa tem como objetivo ler o nome e sobrenome do usuario e colocar em ordem crescente alfabeticamente.\n\n");
	printf("                              --Instruções para uso do programa--\n\n");
	printf("1-O usuario deve digitar em caixa alta (tudo maiusculo)\n");
	printf("2-O usuario deverá saber o número da quantidade de letras do seu nome e sobrenome somados, exemplo:\n\n");
	printf("ALEXANDRE PATEIS -> 9+5=15\n\n");
	printf("3-Deverá ser digitado uma letra de cada vez.\n");
	printf("4-Bom uso do programa!!\n\n");
	printf("Digite qualquer número e em seguida pressione 'Enter' para iniciar o programa.\n");
	
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	name *p;
	
	int i, j, h, op, n, u=1, s, b;
	
	menu();
	scanf("%d", &b);
	system("cls");
	if(b!=1651651){

	printf("\nDigite quantas letras tem o seu nome e o sobronome juntos: ");
	scanf("%d", &n);
	
	p = (name*)malloc(n*sizeof(name));
	
	for(i=0; i<n; i++)
	{
		printf("\nDigite a %d° letra: ", u++);
		scanf("%s", p[i].letra);
			
	}

	
	
	for(i=1; i<n; i++)
	{
	

		strcpy(p[i].aux,p[i].letra);
								  					  
		for(j=i-1; j>=0 && strcmp(p[i].aux, p[j].letra) < 0; j--)
		{
			strcpy(p[j+1].letra,p[j].letra);
		}
		strcpy(p[j+1].letra,p[i].aux);
	}
	}
	
	system("cls");
	
	printf("\nO resultado é: ");
	for(i=0; i<n; i++)
	{
		
		printf("%s ", p[i].letra);
		
	}
	do{

	printf("\n\nDeseja repetir novamente o programa ?\n1-SIM\n2-NÃO\n");
	scanf("%d", &s);
	printf("\n");
	if(s>2 || s<0)
	{
		printf("OPÇÃO INVALIDA, DIGITE NOVAMENTE !\n");
	}
	}while(s>2 || s<=0);
	if(s == 1)
	{
		system("cls");
		main();
	}else {
		system("cls");
		printf("\nObrigado por usar esse programa !!\n");
		return 0;
	}
	free(p);
	
}

