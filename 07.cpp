#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maior(int a, int b, int c){
	int soma=0, maior, menor;
	
	if(a>=b){
		if(a>=c){
			maior=a;
		}else{
			maior=c;
		}
	}else if(b>=c){
		maior=b;
	}else{
		maior=c;
	}
	
	if(a<=b){
		if(a<=c){
			menor=a;
		}else{
			menor=c;
		}
	}else if(b<=c){
		menor=b;
	}else{
		menor=c;
	}
	
	soma=maior+menor;
	
	return soma;
}

int main(){
	int a=0, b=0, c=0;
	
	cin>>a>>b>>c;
	
	cout<<maior(a, b, c)<<endl;
	
	return 0;
}
