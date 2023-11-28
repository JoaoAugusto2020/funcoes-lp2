#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void divisores(int n){
	int resto=0;
	
	for(int i=1; i<=n; i++){
		if((n%i)==0){
			cout<<i<<endl;
		}
	}
}

int main(){
	int n=0;
	
	cin>>n;
	
	divisores(n);
	
	return 0;
}
