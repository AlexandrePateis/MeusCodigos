#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct filas
{
	int mt;
	char nome[50];
	char sobrenome[50];
	float nota_um, nota_dois, nota_tres;
	float media;
	struct filas *prox;
	 
}fila;


 
int main ()
{
	fila *inicio, *no;
	inicio=(filas*)malloc(sizeof(filas));
	no=inicio;
	setlocale(LC_ALL, "Portuguese");
	if(inicio == NULL)
	{
		printf("Memoria nao alocada !!! \n");
		return 0; 
	}
	
	int cont=2, i=1, aux=0, n=1, m=1, p=1, u, h=1, z=1;
	float soma=0;
	
	
	printf("\t\t---PROGRAMA PARA VOCÊ YOUTUBER---\n\n");
	printf(":::::::::::::: REGRAS PARA MEXER NESSE PROGRAMA ::::::::::::::::\n\n");
	printf("1-O PROGRAMA É INSENTO DE FALHAS MATEMÁTICAS.\n");
	printf("2-CASO DESEJE EXLUIR UM ALUNO, SERÁ SEMPRE POR ORDEM, DO PRIMEIRO AO ÚLIMO.\n");
	printf("3-APÓS A CONCLUSÃO NÃO É POSSÍVEL VOLTAR ATRÁS DAS OPÇÕES DIGITADAS.\n");
	printf("4-CASO VOCÊ EXCLUA TODOS OS ALUNOS O PROGRAMA REINICIARÁ.\n");
	printf("5-CASO O PRIMEIRO ALUNO SEJA EXCLUIDO, O SEGUNDO PASSARÁ A SER O PRIMEIRO, ASSIM SUCESSIVAMENTE.\n");
	printf("6-CASO TENHA DÚVIDAS ENTRE EM CONTATO COM O ALEPATEIS9090@GMAIL.COM\n");
	printf("7-TELEFONE DE CONTATO: (038)98801-6203\n\n");
	printf("A NOTA MÁXIMA PARA CADA PROVA É 100 PONTOS.\nOU SEJA, A MÉDIA PARA SER APROVADO É 60 PONTOS.\n\n\n");
	printf("\tLEMBRE-SE DE SEGUIR TODAS AS REGRAS DITAS PELO PROGRMA\n");
	printf("INDEPENDENTE DA SUA NOTA TENHO CERTEZA QUE VOCÊ DEU O SEU MELHOR !!\n");
	printf("\t\t\t------BOA SORTE------\n\n");
	printf("\t---DIGITE QUALQUER NÚMERO PARA CONTINUAR E EM SEGUIDA APERTE 'ENTER'---\n\n");
	scanf("%d", &u);
	if(u!=1651651){
	system("cls");
	
	do
	{
		printf("DIGITE O NOME DO %d° ALUNO A TERMINAR: ", i++);
		scanf(" %s", &no->nome);
		printf("DIGITE O SOBRENOME DESSE ALUNO: ");
		scanf("%s", &no->sobrenome);
		do{
		printf("DIGITE A PRIEMIRA NOTA: ");
		scanf("%f", &no->nota_um);
		if(no->nota_um>100){
			printf("--A NOTA NÃO PODE SER MAIOR DO QUE 100--.\n\tCORRIJA O ERRO\n\n");
		}
		}while(no->nota_um>100);
		do{
		
		printf("DIGITE A SEGUNDA NOTA: ");
		scanf("%f", &no->nota_dois);
		if(no->nota_dois>100){
			printf("--A NOTA NÃO PODE SER MAIOR DO QUE 100--.\n\tCORRIJA O ERRO\n\n");
		}
		}while(no->nota_dois>100);
		do{
	
		printf("DIGITE A TERCEIRA NOTA: ");
		scanf("%f", &no->nota_tres);
		if(no->nota_tres>100){
			printf("--A NOTA NÃO PODE SER MAIOR DO QUE 100--.\n\tCORRIJA O ERRO\n\n");
		}
		}while(no->nota_tres>100);
		soma=no->nota_um+no->nota_dois+no->nota_tres;
		no->media=soma/3;
		
	
		printf("DESEJA REGISTRAR MAIS UM ALUNO?\n1-SIM\n2-NAO");
		printf("\n");
		scanf("%d", &cont);
		system("cls");
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
	
	}
	no=inicio;
	do{
		
	printf("DESEJA EXCLUIR O %d° ALUNO CADASTRADO?\n1-SIM\n2-NAO\n\n", h++);
	printf("%d° ALUNO CADASTRADO: %s\n",z++, no->nome);
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
	system("cls");
	printf("RESULTADO FINAL\n\n");
	do
	{
		
		printf("NOME DO %d° ALUNO:------------%s\n",n++, no->nome);
		printf("SOBRENOME DO %d° ALUNO:-------%s\n",m++, no->sobrenome);
		printf("MATRICULA NUMERO---------------%d\n", p++);
		printf("PRIMEIRA NOTA:-----------------%.2f\n", no->nota_um);
		printf("SEGUNDA NOTA:------------------%.2f\n", no->nota_dois);
		printf("TERCEIRA NOTA:-----------------%.2f\n", no->nota_tres);
		
		printf("MEDIA DO ALUNO: %.2f PONTOS\n", no->media);
		if(no->media>=60)
		{
			printf("PARABÉNS !!!! VOCÊ FOI APROVADO !!\n\n");
		}else
		{
			printf("INFELIZMENTE VOCÊ FOI REPROVADO....\n\n");
		}
		printf("\n");
		no=no->prox;
	}while(no!=NULL);
	
	free(inicio);
	free(no);
	
	return 0;
	
}
