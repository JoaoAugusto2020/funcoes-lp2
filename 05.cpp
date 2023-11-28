#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int soma(int n){
	int soma;
	
	soma=(n*(1+n))/2;
	
	return soma;
}

int main(){
	int n=0;
	
	cin>>n;
	
	cout<<soma(n)<<endl;
	
	return 0;
}

//achei confuso o singificado de cada termo da fórmula
