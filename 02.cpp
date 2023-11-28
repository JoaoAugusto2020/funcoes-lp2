#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maior(int num1, int num2){
	int maior;
	
	if(num1==num2){
		cout<<"os numeros sao iguais"<<endl;
		return 0;
	}else if(num1>num2){
		maior=num1;
	}else{
		maior=num2;
	}
	
	return maior;
}

int main(){
	int x=0, y=0;
	
	cin>>x>>y;
	
	cout<<maior(x, y)<<endl;
	
	return 0;
}
