#include <iostream>
using namespace std;
int mindenoneeded(int*coins,int amount,int n){
	// base case
	if(amount==0){
		return 0;
	}



	// recursivecase
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
		int chotaamount=amount-coins[i];
		int chotaans=mindenoneeded(coins,chotaamount,n);//2
		if(chotaans!=INT_MAX&&chotaans<ans){
			ans=chotaans+1;
		}

	}

	}

	return ans;
	
}
int main(){
	int coins[]={1,7,10};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;
	cout<<mindenoneeded(coins,amount,n)<<endl;




	return 0;
}