#include<iostream>
using namespace std;
int findmindenomination(int amount,int *deno,int n){
	// base case
	if(amount==0){
		return 0;
	}



	// rec case

	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamount=amount-deno[i];
		if(bachaamount>=0){
			int remainingdeno=findmindenomination(bachaamount,deno,n);
			if(remainingdeno<ans){
				ans=remainingdeno+1;
			}

		}
	

	}

	return ans;
	

}

int bottomup(int amount,int *deno,int n){
	int *arr=new int[amount+1];
	arr[0]=0;
	for (int i = 1; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}

	for(int i=1;i<=amount;i++){
		for(int j=0;j<n;j++){
		if(i-deno[j]>=0){
		arr[i]=min(arr[i],arr[i-deno[j]]+1);
	}

	}

	}


	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return arr[amount];
	
	






}

int topdownfindmindenomination(int amount,int *deno,int n,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}



	// rec case

	if(arr[amount]!=-1){
		return arr[amount];

	}

	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamount=amount-deno[i];
		if(bachaamount>=0){
			int remainingdeno=topdownfindmindenomination(bachaamount,deno,n,arr);
			if(remainingdeno<ans){
				ans=remainingdeno+1;
			}

		}
	

	}

	return arr[amount]=ans;
	

}
int main(){

	int deno[]={1,7,10};
	int n=sizeof(deno)/sizeof(int);


	int amount;
	cin>>amount;

	// cout<<findmindenomination(amount,deno,n)<<endl;


	int *arr=new int[amount+1];

	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=-1;
	}





	cout<<topdownfindmindenomination(amount,deno,n,arr)<<endl;
	cout<<endl;
	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";

	}

	cout<<endl;


	cout<<bottomup(amount,deno,n)<<endl;



	return 0;
}