#include<iostream>
using namespace std;
int totalways(int n,int m){
	if(m==0||n==0){
		return 1;
	}

	return totalways(n,m-1)+totalways(n-1,m);
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<totalways(n,m)<<endl;



	return 0;
}