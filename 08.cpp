#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int juros(double c, double i, double t){
	double j=0;
	
	j=c*(i/100)*t;
	
	return j;
}

int main(){
	int c=0, m=0, t=0;
	
	cin>>c>>m>>t;
	
	cout<<juros(c, t, m)<<endl;
	
	return 0;
}
