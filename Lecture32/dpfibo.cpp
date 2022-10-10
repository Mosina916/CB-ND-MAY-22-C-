#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}

	// recursive case
	return fibo(n-1)+fibo(n-2);
}
// top down
int topdownfibo(int n,int *dp){
	// base case
	if(n==0||n==1){
		return dp[n]=n;
	}

	if(dp[n]!=-1){
		return dp[n];
	}
	// recursive case
	return dp[n]=topdownfibo(n-1,dp)+topdownfibo(n-2,dp);
}

int bottompu(int pos){
	int *dp=new int[pos+1];
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=pos;i++){
		dp[i]=dp[i-1]+dp[i-2];

	}


	for(int i=0;i<=pos;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;


	return dp[pos];

}

int main(){
	int pos;
	cin>>pos;
	

	int *arr=new int[pos+1];

	for(int i=0;i<=pos;i++){
		arr[i]=-1;

	}
	cout<<topdownfibo(pos,arr)<<endl;

	for(int i=0;i<=pos;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<endl;

	cout<<bottompu(pos)<<endl;



	cout<<fibo(pos)<<endl;




	return 0;
}