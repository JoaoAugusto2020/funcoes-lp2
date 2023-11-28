#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int soma(double a, double b){
	int soma=0;
	
	for(int i=a; i<=b; i++){
		if(i%2==0){
			soma+=i;
		}
	}
	
	return soma;
}

int main(){
	int a=0, b=0;
	
	cin>>a>>b;
	
	cout<<soma(a, b)<<endl;
	
	return 0;
}
