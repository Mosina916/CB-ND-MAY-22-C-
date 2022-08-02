#include<iostream>
using namespace std;
int xpowern(int x,int n){//2 0
	// base case
	if(n==0){
		return 1;
	}
	// recursive case
	return x*xpowern(x,n-1);//2*8
}



int main(){

	int x,n;
	cin>>x>>n;//2 4

	xpowern(x,n);
	
	return 0;
}