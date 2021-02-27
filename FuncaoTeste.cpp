#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

float AreRet(float x, float y){
	float area= x*y;
	return area;
}

main(){
	int cont;
	while(cont!=2){
	
	cout<<"Digite o valor da base e da altura"<<endl;
	float a, b;
	
	cin>>a;
	cin>>b;
	float d=AreRet(a, b);
	AreRet(a,b);
	printf("%.2f\n", d);
	cout<<"Deseja repetir a operacao?"<<endl;
	cout<<"\n1-SIM\n2-NAO"<<endl;
	cin>>cont;
	}
}

