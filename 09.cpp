#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double calcularDelta(double a, double b, double c){
	double delta;
	
	delta=(pow(b,2))-(4*a*c);
	
	return delta;
}

double umaRaiz(double b, double a){
	double x;
	
	x=(b*-1)/(2*a);
	
	return x;
}

void duasRaiz(double d, double b, double a){
	double x1, x2;
	
	x1=((b*-1)+sqrt(d))/(2*a);
	x2=((b*-1)-sqrt(d))/(2*a);
	
	cout<<"Raizes = "<<x1<<" e "<<x2<<endl;
}

int main(){
	double a=0, b=0, c=0, delta;
	
	cin>>a>>b>>c;
	
	delta=calcularDelta(a, b, c);
	
	if(delta<0){
		//n tem raizes reais
		cout<<"nao existem raizes"<<endl;
	}else if(delta==0){
		//1 raiz
		cout<<umaRaiz(b, a)<<endl;
	}else{
		//2 raizes
		duasRaiz(delta, b, a);
	}
	
	return 0;
}
