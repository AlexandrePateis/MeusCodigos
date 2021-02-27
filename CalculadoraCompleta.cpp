#include<stdio.h>
#include<math.h>
main()
{
	int vet[20], i, op, qnt, cont=1;
	float num, soma=0, sub, mul=1, a, b, x, y, z, x1, x2, delta;
	
	printf("---CALCULADORA BASICA DE OPERACOES.---\n");
	printf("\n");
	while(cont!=2){
	printf("1-Adicao.\n2-Subtracao.\n3-Multiplicacao.\n4-Divisao.\n5-Equacao do segundo grau.\n");
	printf("\n");
	printf("\nDIGITE A SUA OPCAO: ");
	scanf("%d", &op);
	printf("\n");
	
	if(op==1)
	{
		printf("VOCE ESCOLHEU ADICAO.\n");
		printf("DIGITE A QUANTIDADE DE VALORES A SEREM SOMADOS: ");
		scanf("%d", &qnt);
		for(i=1;i<=qnt;i++){
		
		printf("DIGITE O VALOR %d: ", i);
		scanf("%f", &num);
		soma=soma+num;
		}
		printf("SUA SOMA EH: %.2f\n", soma);
		printf("\n");
		printf("\n");
	}else if(op==2)
	{
		printf("VOCE ESCOLHEU SUBTRACAO.\n");
		printf("DIGITE A QUANTIDADE DE VALORES A SEREM SUBTRAIDOS: ");
		scanf("%d", &qnt);
		printf("DIGITE O VALOR INICIAL PARA SUBTRAIR: ");
		scanf("%f", &sub);
		for(i=1;i<=qnt;i++){
		printf("DIGITE O VALOR %d: ", i);
		scanf("%f", &num);
		sub=sub-num;
		}
		printf("SUA SUBTRACAO EH: %.2f", sub);
		printf("\n");
		printf("\n");
	}else if(op==3)
	{
		printf("VOCE ESCOLHEU MULTIPLICACAO.\n");
		printf("DIGITE A QUANTIDADE DE VALORES A SEREM MULTIPLICADOS: ");
		scanf("%d", &qnt);
		for(i=1;i<=qnt;i++){
		
		printf("DIGITE O VALOR %d: ", i);
		scanf("%f", &num);
		mul=num*mul;
		}
		printf("SUA MULTIPLICACAO EH: %.2f", mul);
		printf("\n");
		printf("\n");
	}else if(op==4)
	{
		printf("VOCE ESCOLHEU DIVISAO.\n");
		printf("\n");
		printf("DIGITE O PRIMEIRO VALOR: ");
		scanf("%d", &a);
		printf("\n");
		printf("DIGITE O SEGUNDO VALOR: ");
		scanf("%d", &b);
		if(a>b)
		{
			printf("SUA DIVISAO EH: %.3f", a/b);
			printf("\n");
			printf("\n");
		}else 
		{
			printf("SUA DIVISAO EH: %.2f", b/a);
			printf("\n");
			printf("\n");
		}
		
	}else if (op==5)
	{
		printf("VOCE ESCOLHEU EQUACAO DO SEGUNDO GRAU.\n");
		printf("\n");
		printf("DIGITE VALOR DO FATOR A: ");
		scanf("%f", &x);
		printf("\n");
		printf("DIGITE VALOR DO FATOR B: ");
		scanf("%f", &y);
		printf("\n");
		printf("DIGITE VALOR DO FATOR C: ");
		scanf("%f", &z);
		printf("\n");
		delta=(y*y)-4*x*z;
		if(delta<0)
		{
			printf("NAO E POSSIVEL EXTRAIS RAIZ DESSE NUMERO.");
		}else
		{	delta=(y*y)-4*x*z;
			x1 = ((-y) + sqrt(delta))/(2*(x));
     		x2 = ((-y) - sqrt(delta))/(2*(x));
     		printf("AS RAIZES DA EQUACAO EH X1= %.2f E X2= %.2f", x1, x2);
     		printf("\n");
     		printf("\n");
		}
	}
	
	printf("Deseja fazer outra operacao?\n1-SIM\n2-NAO\n");
	scanf("%d", &cont);
	printf("\n");
	if(cont==2)
	{
		printf("---PROGRAMA FINALIZADO---");
		
	}
}		return 0;

}



	
