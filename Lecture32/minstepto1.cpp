#include<iostream>
using namespace std;
int minstepstoreach1(int n){
	// base case
	if(n==1){
		return 0;
	}
	// rec case
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=minstepstoreach1(n-1);

	if(n%2==0){
		op2=minstepstoreach1(n/2);
	}
	if(n%3==0){
		op3=minstepstoreach1(n/3);
	}

	return min(op1,min(op2,op3))+1;
	
}

// top down approach

int minstepstoreach1topdown(int n,int*arr){
	// base case
	if(n==1){
		return arr[n]=0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// rec case
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=minstepstoreach1topdown(n-1,arr);

	if(n%2==0){
		op2=minstepstoreach1topdown(n/2,arr);
	}
	if(n%3==0){
		op3=minstepstoreach1topdown(n/3,arr);
	}

	return arr[n]=min(op1,min(op2,op3))+1;
	
}

// bootom up
int bottomup(int n){
	int *arr=new int[n+1];
	arr[1]=0;


	for(int i=2;i<=n;i++){
			int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=arr[i-1];
	if(i%2==0){
		op2=arr[i/2];
	}
	if(i%3==0){
		op3=arr[i/3];
	}
	arr[i]=min(op1,min(op2,op3))+1;

	}

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return arr[n];


}
int main(){
	int n;
	cin>>n;
	

	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<minstepstoreach1topdown(n,arr)<<endl;


	for (int i = 1; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}


	cout<<endl;

	cout<<endl;



	cout<<bottomup(n)<<endl;


	cout<<minstepstoreach1(n)<<endl;


	return 0;
}