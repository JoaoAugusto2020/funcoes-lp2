#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int delta(int a, int b, int c){
	int delta;
	
	delta=(pow(b,2))-(4*a*c);
	
	return delta;
}

int main(){
	int a=0, b=0, c=0;
	
	cin>>a>>b>>c;
	
	cout<<delta(a, b, c)<<endl;
	
	return 0;
}
