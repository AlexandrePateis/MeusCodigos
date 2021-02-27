#include<stdio.h>
#include<stdlib.h>
/*Criar um programa que leia dois tipos diferentes de dados, sendo um uma ficha completa de uma pessoa, e outro uma ficha reduzida, com dados mais insignficantes, sendo que
o usuario irá decidir qual o tipo de dado ele irá ler, quantas vezes, e se deseja repetir a operração.*/ 

typedef struct fichaCompleta
{
	char nome[100];
	int idade;
	char rua[100];
	char cpf[14];
	char telefone[10];
	char mes[50];
	int dia;
	int ano;
	char cidade[50];
	char bairro[100];
}fichaCompleta;

typedef struct fichaBasica 
{
	char nome[50];
	int idade;
	char telefone[20];
}fichaBasica;

int main()
{
	fichaCompleta *pessoa= (fichaCompleta*)malloc(sizeof(fichaCompleta));
	fichaBasica *humano=(fichaBasica*)malloc(sizeof(fichaBasica));
	
	if(pessoa==NULL || humano==NULL){
		printf("Memoria nao alocada.");
		return 0;
	}
	
	int op=1, cont=0, tipo, aux=0, i, sim;
	
	while(op!=0)
	{
		printf("Digite qual tipo de ficha deseja ler.\n1-Completa\t\t2-Basica\n\n");
		scanf(" %d", &tipo);
		if(tipo==1){
			printf("\nDigite o seu nome: ");
			scanf(" %s", &pessoa[cont].nome);
			printf("\nDigite sua idade: ");
			scanf(" %d", &pessoa[cont].idade);
			printf("\nDigite a sua rua: ");
			scanf(" %s", &pessoa[cont].rua);
			printf("\nDigite o seu bairro: ");
			scanf(" %s", &pessoa[cont].bairro);
			printf("\nDigite o seu cpf: ");
			scanf(" %s", &pessoa[cont].cpf);
			printf("\nDigite o seu telefone: ");
			scanf(" %s", &pessoa[cont].telefone);
			printf("\nDigite o mes do seu nascimento: ");
			scanf(" %s", &pessoa[cont].mes);
			printf("\nDigite o dia do seu nascimento: ");
			scanf(" %d", &pessoa[cont].dia);
			printf("\nDigite o ano do seu nascimento: ");
			scanf(" %d", &pessoa[cont].ano);
			printf("\nDigite sua cidade: ");
			scanf(" %s", &pessoa[cont].cidade);
			
			cont++;
			
			pessoa=(fichaCompleta*)realloc(pessoa,cont*sizeof(fichaCompleta));
			
			
		}else if(tipo==2){
			printf("\nDigite o seu nome: ");
			scanf(" %s", &humano[cont].nome);
			printf("\nDigite sua idade: ");
			scanf(" %d", &humano[cont].idade);
			printf("\nDigite o seu telefone: ");
			scanf(" %s", &humano[cont].telefone);
			aux++;
			humano=(fichaBasica*)realloc(humano,aux*sizeof(fichaCompleta));
		
		}else{
			printf("\nOpcao invalida, favor escolher novamente.\n\n");
			main();
		}
		do{
	
		printf("Deseja fazer outra leitura?\n1-Sim \t0-Nao\n\n");
		scanf(" %d", &op);
		}while(op>1 || op<0 );
			
	
	}
	for(i=0;i<cont;i++)
	{
		printf("Nome: %s\n", pessoa[i].nome);
		printf("Idade: %d\n", pessoa[i].idade);
		printf("Cpf: %s\n", pessoa[i].cpf);
		printf("Telefone: %s\n", pessoa[i].telefone);
		printf("Cidade: %s\n", pessoa[i].cidade);
		printf("Bairro: %s\n", pessoa[i].bairro);
		printf("Rua: %s\n", pessoa[i].rua);
		printf("Nascido no dia: %d\n", pessoa[i].dia);
		printf("Do mes: %d\n", pessoa[i].mes);
		printf("Do Ano: %d\n\n", pessoa[i].idade);
		
		printf("Caso deseja fazer outra leitura digite 1, ou qualquer tecla para sair.\n\n");
		scanf("%d", &sim);
		if(sim==1){
			main();
		}else{
			return 0;
		}
		
	}
	for(i=0;i<aux;i++)
	{
		printf("Nome: %s\n", humano[i].nome);
		printf("Idade: %d\n", humano[i].idade);
		printf("Cpf: %s\n", humano[i].telefone);
	}
	
	
	return 0;
}
