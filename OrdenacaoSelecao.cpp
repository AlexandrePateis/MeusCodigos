#include<stdio.h>
#include<stdlib.h>
#define tam 5 

main(){

	int item[tam], i, j, menor=0, aux=0;
	
	printf("ALGORITMO DE ORDENACAO POR SELECAO\n");
	printf("Digite os numeros que serao apresentados em ordem crescente:");
	for(i=0;i<tam;i++)
	{
		printf("Digite o numero %d", i+1);
		scanf("%d", &item[i]);
	}
	for(i=0; i<tam-1; i++)
	{
		menor=i;
		for(j=i+1; j<tam; j++){
			if(item[j]<item[menor])
			menor=j;
		}
		aux=item[menor];
		item[menor]=item[i];
		item[i]=aux;
	}
		printf("\nOs numeros em ordem crescene sao: ");
		for(i=0;i<tam;i++)
		{
			printf("%d", item[i]);
		}

}
