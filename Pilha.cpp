#include<stdio.h>
#include<stdlib.h>
#define TAM 100

typedef struct {
	int num[TAM];
	int topo;
}TPilha;

void TPilha_inicia (TPilha *p){
	
	p->topo = -1;
}

int TPilha_vazia (TPilha *p) {
	if(p->topo == -1) {
		return 1;
	}else {
		return 0;
	}
}

int TPilha_cheia (TPilha *p) {
	if(p->topo == TAM-1) {
		return 1;
	}else {
		return 0;
	}
}

void TPilha_insere (TPilha *p, int x) {
	if(TPilha_cheia(p)==1){
		printf("ERRO: Pilha cheia\n");
	}else {
		p->topo++;
		p->num[p->topo] = x;
	}
	
}

int TPilha_remove (TPilha *p) {
	int aux;
	if(TPilha_vazia(p)==1) {
		printf("ERRO: Pilha vazia.\n");
	}else {
		aux = p->num[p->topo];
		p->topo--;
		return aux;
		}
	
}

	main(){
	
	TPilha *p = (TPilha*)malloc(sizeof(TPilha));
	TPilha_inicia(p);
	
	TPilha_insere(p, 1);
	TPilha_insere(p, 2);
	TPilha_insere(p, 3);
	
	int aux;
	
	aux=TPilha_remove(p);
	printf("\n SAIU: %d", aux);
	
	
	
	
}
