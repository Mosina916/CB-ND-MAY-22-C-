#include<iostream>
using namespace std;
// k-->3
int nowaystoreach(int n){//2
	// base case
	// if(n==2){
	// 	return 2;
	// }
	// if(n==1){
	// 	return 1;

	// }
	// if(n==0){
	// 	return 1;
	// }
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}



	// recursive case
	return nowaystoreach(n-1)+nowaystoreach(n-2)+nowaystoreach(n-3);
}


// k-->4
// int nowaystoreach(int n){//
// 	// base case
// 	// if(n==2){
// 	// 	return 2;
// 	// }
// 	// if(n==1){
// 	// 	return 1;

// 	// }
// 	// if(n==0){
// 	// 	return 1;
// 	// }
// 	// if(n==3){
// 	// 	return 4;
// 	// }

// 	if(n<0){
// 		return 0;
// 	}


// 	// recursive case
// 	return nowaystoreach(n-1)+nowaystoreach(n-2)+nowaystoreach(n-3)+nowaystoreach(n-4);
// }


int nowaystoreach(int n,int k,int &sum){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}


	// recursive case
	// int sum=0;

	for(int i=1;i<=k;i++){
		sum=sum+nowaystoreach(n-i,k,sum);

	}
	return sum;


}

int main(){
	// int n;
	// cin>>n;//5
	// cout<<nowaystoreach(n)<<endl;


	int n,k;
	cin>>n>>k;//5
	// cout<<nowaystoreach(n,k,0)<<endl;

	

	return 0;
}