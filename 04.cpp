#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int pares(int a, int b, int c){
	int cont;
	
	if(a%2==0){
		cont++;
	}
	if(b%2==0){
		cont++;
	}
	if(c%2==0){
		cont++;
	}
	
	return cont;
}

int main(){
	int a=0, b=0, c=0;
	
	cin>>a>>b>>c;
	
	cout<<pares(a, b, c)<<" numeros sao pares"<<endl;
	
	return 0;
}
