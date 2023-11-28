#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int forma(int a, int b){
	int forma;
	
	if(a==b){
		forma=1;
	}else{
		forma=0;
	}
	
	return forma;
}

int main(){
	int b=0, h=0;
	
	cin>>b>>h;
	
	cout<<forma(b,h)<<endl;
	
	return 0;
}
